// Section 14
// Overloading operators as member methods
#include <iostream>
#include "Mystring.h"

using namespace std;

int main() {
    Mystring larry{"Ahmed"};
    Mystring moe{"loves"};
    Mystring ahmed;
    cout<< "Enter shosho ";
    cin >>ahmed;
    cout<< "the three stooges "<<endl << larry <<" "<<moe<<" "<<ahmed<<endl;
    cout <<"\nEnter the three names sperateted by spaces ";
    cin >>larry>>moe>>ahmed;
    cout<< "the three stooges "<< larry <<" "<<moe<<" "<<ahmed<<endl;
}

