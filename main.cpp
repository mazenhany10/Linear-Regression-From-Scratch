#include <iostream>
using namespace std;
class Player
{
private:
    string name ;
    int health ;
    int xp;
public:
    Player();
    Player(string name_val);
    Player(string name_val,int health_val,int xp_val);
  
};
Player::Player()
:Player{"None",0,0}{
    cout << " no args contrutor"<<endl;
}
Player::Player(string name_val)
:Player{name_val,0,0}{
    cout << " one contrutor"<<endl;
}
Player::Player(string name_val,int health_val,int xp_val)
:name{name_val},health{health_val},xp{xp_val}{
    cout << " all contrutor has been called "<<endl;
}

int main() {
    Player empty ;
    Player frank{"frank"};
    Player mazen {"mazen",100,90};
}
