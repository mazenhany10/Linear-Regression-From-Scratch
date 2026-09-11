#ifndef Account_hpp
#define Account_hpp
#include <string>
#include <iostream>
using namespace std;
class Player{
private:
    string name ;
    int health;
    int xp;
public:
    void set_name(string n){
        name=n;
        
    }
//constructors
    Player(){
        cout<< "no args constructors are called"<< endl;
        
    }
    Player(string name){
        this->name = name;
           cout << "string constructor called" << endl;
       
    
    }
    Player (string name , int health,int xp){
        this->name = name;
           this->health = health;
           this->xp = xp;
           cout << "three args constructor called" << endl;
    
    }
    ~Player(){
        cout<< "destractor called for "<< name << endl;
    }
    
};
#endif // !Account_hpp
