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
    Base(const Base&other)
    :value{other.value}{
        cout << "base copy constructor"<<endl;
    }
    Base &operator=(const Base&rhs){
        cout << "base operator= ";
        if (this == &rhs)
            return *this;
        value =rhs.value;
        return *this;
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
    Derived(const Derived& other)
        : Base(other), doubled_value{other.doubled_value} {
        cout << "Derived copy constructor" << endl;
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
