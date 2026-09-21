#include <iostream>
using namespace std;
class Player
{
private:
    string name ;
    int health ;
    int xp;
public:

    string get_name(){return name;}
    int get_health(){return health;}
    int get_xp(){return xp;}
    Player(string name_val="None",int health_val=0,int xp_val=0);
  //copy
    Player(const Player & source );
    //destractor
    ~Player(){cout <<"dustructor is called for"<< name<<endl;}
};
Player::Player(string name_val,int health_val,int xp_val)
:name{name_val},health{health_val},xp{xp_val}{
    cout << "All contrutor has been called "+ name<<endl;
}
Player::Player(const Player & source )
:name{source.name},health{source.health},xp{source.xp}{
    
    cout << " copy is made from "<< source.name<<endl;
}
void display_player(Player P){
    cout << "Name: "<< P.get_name()<<endl;
    cout << "Health : "<< P.get_health()<<endl;
    cout << "xp: "<< P.get_xp()<<endl;
}
int main() {
    Player empty{" xxxxx",100,50};
    Player my_new_object{empty};
    display_player(empty);
    Player frank{"frank"};
    Player mustafa{" mustafa",100};
    Player mazen {" mazen",100,90};
}
