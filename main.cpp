#include <iostream>
using namespace std;
class Base{
public:
    Base():value{0}{
        cout << "no base cons are called "<<endl;
    }
    Base(int x):value{x}{
        cout << "base int overloaded cons are called "<<endl;
    }
    ~Base(){
        cout << "base distructor are called "<<endl;
    }
private:
    int value;
};
class Derived:public Base{
private:
    int doubled_value;
public:
    Derived():Base{},doubled_value{0}{
        cout << "Derived no cons are called "<<endl;
    }
    Derived(int x):Base{x},doubled_value{x*2}{
        cout << "Derived int overloaded cons are called "<<endl;
    }
    ~Derived(){
        cout << "Derived distructor are called "<<endl;
    }
};

int main() {
//    Base b;
//    Base b{200};
//    Derived d;
    Derived d{1000};
    return 0;
}
