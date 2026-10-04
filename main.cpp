#include <iostream>
using namespace std;
class Base{
public:
    Base():value{0}{
        cout << "no bas cons are called "<<endl;
    }
    Base(int x):value{x}{
        cout << " bas int overloaded cons are called "<<endl;
    }
    ~Base(){
        cout << " bas distructor are called "<<endl;
    }
private:
    int value;
};
class Derived:public Base{
private:
    int doubled_value;
public:
    Derived():doubled_value{0}{
        cout << " Derived no cons are called "<<endl;
    }
    Derived(int x):doubled_value{x*2}{
        cout << " Derived int overloaded cons are called "<<endl;
    }
    ~Derived(){
        cout << " Derived distructor are called "<<endl;
    }
};

int main() {
//    Base b;
//    Base b{200};
//    Derived d;
    Derived d{1000};
    return 0;
}
