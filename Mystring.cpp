#include <cstring>
#include <iostream>
#include "Mystring.h"

using namespace std;

// No-args constructor
Mystring::Mystring()
    : str{nullptr} {
    str = new char[1];
    *str = '\0';
}

// Overloaded constructor
Mystring::Mystring(const char *s)
    : str{nullptr} {
    if (s == nullptr) {
        str = new char[1];
        *str = '\0';
    } else {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }
}

// Copy constructor
Mystring::Mystring(const Mystring &source)
    : str{nullptr} {
    str = new char[strlen(source.str) + 1];
    strcpy(str, source.str);
}

// Destructor
Mystring::~Mystring() {
    delete [] str;
}

// Display
void Mystring::display() const {
    cout << str << " : " << strlen(str) << endl;
}

// Length getter
int Mystring::get_lenth() const {
    return strlen(str);
}

// Getter for C-string
const char* Mystring::get_str() const {
    return str;
}
