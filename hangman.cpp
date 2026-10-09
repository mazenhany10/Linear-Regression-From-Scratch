#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <vector>
#include <ctime>
using namespace std;

void PrintMessage(string message, bool printTop = true, bool printBottom = true)
{
    if (printTop)
    {
        cout << "+---------------------------------+" << endl;
    }

    cout << "|";

    bool front = true;
    for (int i = message.length(); i < 33; i++)
    {
        if (front)
        {
            message = " " + message;
            front = false;
        }
        else
        {
            message = message + " ";
            front = true;
        }
    }

    cout << message << "|" << endl;

    if (printBottom)
    {
        cout << "+---------------------------------+" << endl;
    }
}
void DrawHangman(int guessecount = 0)
{
    if (guessecount >= 1)
        PrintMessage("|", false, false);
    else
        PrintMessage("", false, false);

    if (guessecount >= 2)
        PrintMessage("|", false, false);
    else
        PrintMessage("", false, false);

    if (guessecount >= 3)
        PrintMessage("O", false, false);
    else
        PrintMessage("", false, false);

    if (guessecount == 4)
        PrintMessage("/", false, false);
    else if (guessecount == 5)
        PrintMessage("/|", false, false);
    else if (guessecount >= 6)
        PrintMessage("/|\\", false, false);
    else
        PrintMessage("", false, false);

    if (guessecount >= 7)
        PrintMessage("|", false, false);
    else
        PrintMessage("", false, false);

    if (guessecount == 8)
        PrintMessage("/", false, false);
    else if (guessecount >= 9)
        PrintMessage("/ \\", false, false);
    else
        PrintMessage("", false, false);
}
void PrintLetters(string input, char from, char to)
{
    string s;
    for (char i = from; i <= to; i++)
    {
        if (input.find(i) == string::npos)
        {
            s += i;
            s += ' ';
        }
        else
        {
            s += "  ";
        }
    }
    PrintMessage(s, false, false);
}
bool Printwordandwincheck(string word, string guesses)
{
    string s;
    bool won = true;

    for (int i = 0; i < word.length(); i++)
    {
        if (guesses.find(word[i]) == string::npos)
        {
            s += "_ "; // الحرف لسه ما اتخمنش
            won = false;
        }
        else
        {
            s += word[i]; // الحرف اتخمن
            s += ' ';
        }
    }

    if (!s.empty())
        s.pop_back(); // شيل المسافة الزيادة اللي في الآخر

    PrintMessage(s, false); // false = من غير خط فوق، والخط اللي تحت بيتطبع
    return won;
}
void PrintavailableLetters(string input)
{
    PrintMessage("Available Letters");
    PrintLetters(input, 'A', 'M');
    PrintLetters(input, 'N', 'Z');
}
string GetRandomWord(string path)
{
    string word;
    vector<string> v;

    ifstream file(path);

    if (file.is_open())
    {
        while (getline(file, word))
        {
            string clean;
            for (char c : word)
            {
                if (isalpha((unsigned char)c))
                    clean += toupper(c);
            }

            if (!clean.empty())
                v.push_back(clean);
        }

        file.close();
    }

    if (v.empty())
    {
        return "";
    }

    int randomline = rand() % v.size();
    return v.at(randomline);
}
int Triesleft(string word, string guesses)
{
    int error = 0;
    for (int i = 0; i < guesses.length(); i++)
    {
        if (word.find(guesses[i]) == string::npos)
        {
            error++;
        }
    }
    return error;
}
int main()
{
    srand(time(0));
    string guesses;
    string wordtoguess = GetRandomWord("word.txt");

    if (wordtoguess.empty())
    {
        cout << "word.txt not found or empty" << endl;
        return 1;
    }

    int tries = 0;
    bool won = false;

    do
    {
        system("clear");
        PrintMessage("HANGMAN");
        DrawHangman(tries);
        PrintavailableLetters(guesses);
        PrintMessage("Guess the word");
        won = Printwordandwincheck(wordtoguess, guesses);

        if (won)
        {
            PrintMessage("YOU WON!");
            break;
        }

        char x;
        cout << ">";
        cin >> x;
        x = toupper(x);

        if (guesses.find(x) == string::npos)
        {
            guesses += x;
        }

        tries = Triesleft(wordtoguess, guesses);
    } while (tries < 10);

    if (!won)
    {
        PrintMessage("GAME OVER");
        PrintMessage("The word was: " + wordtoguess);
    }

    return 0;
}