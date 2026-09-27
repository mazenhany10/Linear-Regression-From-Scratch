#include <iostream>
#include "Mystring.h"

using namespace std;

int main()
{
    Mystring empty;
    Mystring larry("MAZOOOON");
    Mystring stooge{larry};


    empty.display();
    larry.display();
    stooge.display();

    return 0;
}
