#include <iostream>
using namespace std;
class Base{
public:
    int a{0};
    void display(){cout << a<<","<<b<<","<<c<<endl;}
protected:
    int b{0};
private:
    int c{0};
};
class Drived:public Base{
public:
    void accses_member(){
        a=100;
        b=200;
//      c=300;
    }
    
};
int main() {
    cout << "===base member accessfrom base obj======"<<endl;
    Base base;
    base.a=100;
//    base.b=200;
//    base.c=300;
    cout << "===base member access from drivetive obj======"<<endl;
    Drived d;
    d.a=990;
//    d.b=800;
//    d.c=440
}
