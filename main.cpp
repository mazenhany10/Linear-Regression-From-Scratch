// Section 14
// Overloading operators as member methods
#include <iostream>
#include "Mystring.h"

using namespace std;

int main() {
    Mystring larry{"larry"};
    larry.display();
    cout<<"............................."<<endl;
    larry= -larry;
    larry.display();
    cout << boolalpha <<endl;
    Mystring moe {"Moe"};
    Mystring stooge = larry ;
    cout << (larry== moe)<<endl;
    cout << (larry== stooge)<<endl;
    cout<<"............................."<<endl;
    Mystring two_stooges =moe+" "+"larry";
    two_stooges.display();
    cout<<"............................."<<endl;
    Mystring three_stooges =moe+" "+"larry"+" "+"MUSTAFA";
    three_stooges.display();
    three_stooges=-three_stooges;
    three_stooges.display();
}

