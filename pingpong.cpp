#include <iostream>
#include <termios.h>
#include <unistd.h>
#include <fcntl.h>
#include <cstdlib>
#include <ctime>

int kbhit()
{
    struct termios oldt, newt;
    int ch;
    int oldf;

    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    oldf = fcntl(STDIN_FILENO, F_GETFL, 0);
    fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);

    ch = getchar();

    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    fcntl(STDIN_FILENO, F_SETFL, oldf);

    if (ch != EOF)
    {
        ungetc(ch, stdin);
        return 1;
    }
    return 0;
}

int getch()
{
    struct termios oldt, newt;
    int ch;
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    ch = getchar();
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    return ch;
}
using namespace std;
enum eDir
{
    STOP = 0,
    LEFT = 1,
    UPLEFT = 2,
    DOWNLEFT = 3,
    RIGHT = 4,
    UPRIGHT = 5,
    DOWNRIGHT = 6,
    UP = 7,
    DOWN = 8
};
class cBall
{
private:
    int x, y;
    int originX, originY;
    eDir dirction;

public:
    cBall(int posX, int posY)
    {
        originX = posX;
        originY = posY;
        x = posX;
        y = posY;
        dirction = STOP;
    }
    void Reset()
    {
        x = originX;
        y = originY;
        dirction = STOP;
    }
    void changeDirection(eDir d)
    {
        dirction = d;
    }
    void randomDirection()
    {
        dirction = (eDir)((rand() % 6) + 1);
    }
    inline int getx() { return x; }
    inline int gety() { return y; }
    inline eDir getDirection() { return dirction; }
    void Move()
    {
        switch (dirction)
        {
        case STOP:
            break;
        case LEFT:
            x--;
            break;
        case RIGHT:
            x++;
            break;
        case UPLEFT:
            x--;
            y--;
            break;
        case DOWNLEFT:
            x--;
            y++;
            break;
        case UPRIGHT:
            x++;
            y--;
            break;
        case DOWNRIGHT:
            x++;
            y++;
            break;

        default:
            break;
        }
    }
    friend ostream &operator<<(ostream &o, cBall c)
    {
        o << "Ball [" << c.x << "," << c.y << "][" << c.dirction << "]";
        return o;
    }
};
class cPaddle
{
private:
    int x, y;
    int originX, originY;

public:
    cPaddle()
    {
        x = y = 0;
    }
    cPaddle(int posX, int posY) : cPaddle()
    {
        originX = posX;
        originY = posY;
        x = posX;
        y = posY;
    }
    inline void Reset()
    {
        x = originX;
        y = originY;
    }
    inline int getx() { return x; }
    inline int gety() { return y; }
    void moveUp() { y--; }
    void moveDown() { y++; }
    friend ostream &operator<<(ostream &o, cPaddle c)
    {
        o << "Paddle [" << c.x << "," << c.y << "]";
        return o;
    }
};
class cGameManger
{
private:
    int width, height;
    int score1, score2;
    char up1, down1, up2, down2;
    bool quit;
    int delayUs = 100000;
    cBall *ball;
    cPaddle *player1;
    cPaddle *player2;

public:
    cGameManger(int w, int h)
    {
        srand(time(NULL));
        quit = false;
        up1 = 'w';
        down1 = 's';
        up2 = 'i';
        down2 = 'k';
        width = w;
        height = h;
        score1 = score2 = 0;
        ball = new cBall(w / 2, h / 2);
        player1 = new cPaddle(1, h / 2 - 3);
        player2 = new cPaddle(w - 2, h / 2 - 3);
    }
    ~cGameManger()
    {
        delete ball;
        delete player1;
        delete player2;
    }
    void ScoreUp(cPaddle *player)
    {
        if (player == player1)
            score1++;
        else if (player == player2)
            score2++;
        ball->Reset();
        player1->Reset();
        player2->Reset();
    }
    void Draw()
    {
        system("clear");
        for (int i = 0; i < width + 2; i++)
            cout << "#";
        cout << endl;
        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < width; j++)
            {
                int ballx = ball->getx();
                int bally = ball->gety();
                int player1x = player1->getx();
                int player1y = player1->gety();
                int player2x = player2->getx();
                int player2y = player2->gety();
                if (j == 0)
                    cout << "#";
                if (ballx == j && bally == i)
                    cout << "O"; // ball
                else if (player1x == j && player1y == i)
                    cout << "|"; // player1
                else if (player2x == j && player2y == i)
                    cout << "|"; // player2
                else if (player1x == j && player1y + 1 == i)
                    cout << "|"; // player1

                else if (player1x == j && player1y + 2 == i)
                    cout << "|"; // player1

                else if (player1x == j && player1y + 3 == i)
                    cout << "|"; // player1

                else if (player2x == j && player2y + 1 == i)
                    cout << "|"; // player2

                else if (player2x == j && player2y + 2 == i)
                    cout << "|"; // player2

                else if (player2x == j && player2y + 3 == i)
                    cout << "|"; // player2

                else
                    cout << " ";

                if (j == width - 1)
                    cout << "#";
            }
            cout << endl;
        }
        for (int i = 0; i < width + 2; i++)
            cout << "#";
        cout << endl;
        cout << "Score 1: " << score1 << endl;
        cout << "Score 2: " << score2 << endl;
    }
    void Input()
    {
        ball->Move();
        int ballx = ball->getx();
        int bally = ball->gety();
        int player1x = player1->getx();
        int player1y = player1->gety();
        int player2x = player2->getx();
        int player2y = player2->gety();

        if (kbhit())
        {
            char current = getch();
            if (current == up1)
                if (player1y > 0)
                    player1->moveUp();
            if (current == up2)
                if (player2y > 0)
                    player2->moveUp();
            if (current == down1)
                if (player1y + 4 < height)
                    player1->moveDown();
            if (current == down2)
                if (player2y + 4 < height)
                    player2->moveDown();

            if (ball->getDirection() == STOP)
                ball->randomDirection();

            if (current == 'q')
                quit = true;

            if (current == '+' && delayUs > 20000)
                delayUs -= 10000; // أسرع
            if (current == '-')
                delayUs += 10000; // أبطأ
        }
    }
    void logic()
    {
        int ballx = ball->getx();
        int bally = ball->gety();
        int player1x = player1->getx();
        int player1y = player1->gety();
        int player2x = player2->getx();
        int player2y = player2->gety();

        // left paddle
        for (int i = 0; i < 4; i++)
            if (ballx == player1x + 1)
                if (bally == player1y + i)
                    ball->changeDirection((eDir)((rand() % 3) + 4));

        // right paddle
        for (int i = 0; i < 4; i++)
            if (ballx == player2x - 1)
                if (bally == player2y + i)
                    ball->changeDirection((eDir)((rand() % 3) + 1));

        // bottom wall
        if (bally == height - 1)
            ball->changeDirection(ball->getDirection() == DOWNRIGHT ? UPRIGHT : UPLEFT);

        // top wall
        if (bally == 0)
            ball->changeDirection(ball->getDirection() == UPRIGHT ? DOWNRIGHT : DOWNLEFT);

        // right wall
        if (ballx == width - 1)
            ScoreUp(player1);

        // left wall
        if (ballx == 0)
            ScoreUp(player2);
    }
    void run()
    {
        while (!quit)
        {
            Draw();
            Input();
            logic();

            usleep(delayUs);
        }
    }
};
int main()
{
    cGameManger c(30, 20);
    c.run();

    return 0;
}