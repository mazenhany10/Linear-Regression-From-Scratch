//
//  Player.hpp
//  test 3
//
//  Created by Mazenn  on 23/09/2026.
//


#include <iostream>
#include <vector>
using namespace std;
class Player
{
private:
    string name;
    int health;
    int xp;
public:
   // newwwww
    string get_name () const{
        return name;
    }
    void set_name(string name_val){
        name=name_val;
    }
    Player();
    Player(string name_val);
    Player(string name_val,int health_val,int xp_val);
};
Player::Player()
:Player{"None",0,0}{
    
}
Player::Player(string name_val)
:Player{name_val,0,0}{
    
}

Player::Player(string name_val,int health_val,int xp_val)
:name{name_val},health{health_val},xp{xp_val}{
    
}
// newwwww
void display_player(const Player &p){
    cout << p.get_name()<<endl;
}

int main() {
    const Player vallian {"moustafa",100,55};
    Player hero {"hero",100,15};
    cout << hero.get_name()<< endl;
    cout << vallian.get_name()<< endl;
}
