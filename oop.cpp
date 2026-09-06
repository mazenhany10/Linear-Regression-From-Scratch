#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Player {
public:
    string name;
    int health;
    int xp;
    void talk(string text_to_say){cout << name<<" sayes "<<text_to_say<<endl;};
    bool is_dead();
    
};

class Account {
public:
    string name ;
    double balance;
    
    bool deposit(double bal) {balance+=bal; cout <<"THE IN DEPOSIT "<<bal<< " the total balance = "<<balance <<endl;return true;}
    bool withdraw(double bal){balance-=bal; cout <<"IN withdraw "<<bal<< " the total balance = "<<balance<<endl;
        return true;}
};


int main() {
    Player frank;
    frank.name="Frank";
    frank.health=100;
    frank.xp=12;
    frank.talk("Hi there");
    cout <<"--------------------"<<endl;
    Player*enemy=new Player;
    enemy->name="Hassan";
    enemy->health=100;
    enemy->xp=9;
    enemy->talk("I am gonna kill you");
    cout <<"--------------------"<<endl;
    Account frank_account;
    frank_account.balance=50000;
    frank_account.deposit(1000);
    frank_account.withdraw(500);
    
    
    
    cout<<endl;
    return 0;
}
