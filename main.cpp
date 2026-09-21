#include <iostream>
using namespace std;
class Player
{
private:
    string name ;
    int health ;
    int xp;
public:
    void set_name(string name_val){
        name = name_val;
    }
    string get_name(){
        return name;
    }
    Player(){
        name= "none";
        health =100;
        xp=3;
    }
};
int main() {
    Player mazen ;
    mazen.set_name("Mazen");
    cout << mazen.get_name()<<endl;
    
}
