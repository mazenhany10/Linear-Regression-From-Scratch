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
Mystring::Mystring(Mystring &&source)
: str(source.str){
    source.str= nullptr;
    cout << "Move const have been used "<< endl;
}
// Destructor
Mystring::~Mystring() {
    delete [] str;
}
//copy assignment
Mystring &Mystring::operator=(const Mystring &rhs){
    cout << "copy assignment"<<endl;
    if (this ==&rhs)
        return *this;
    delete [] this->str;
    str = new char[strlen(rhs.str)+1];
    strcpy(this->str,rhs.str);
    return *this;
 
}
Mystring &Mystring::operator=( Mystring &&rhs){
    cout << "move assignment"<<endl;
    if (this == &rhs)
        return *this;
    delete [] str;
    str =rhs.str;
    rhs.str= nullptr;
    return *this;
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
