#ifndef _MYSTRING_H_
#define _MYSTRING_H_
#include <iostream>
using namespace std;
class Mystring
{
    friend ostream &operator<<(ostream &os,const Mystring &rhs);
    friend istream &operator>> (istream &in, Mystring &rhs);
private:
    char *str;      // pointer to a char[] that hold a C-style string
public:
    Mystring();                                                          // No-args constructor
    Mystring(const char *s);                                      // Overloaded constructor
    Mystring(const Mystring &source);                     // Copy constructor
    Mystring( Mystring &&source);                          // Move constructiror
    ~Mystring();                                                      // Destructor
    
    Mystring &operator=(const Mystring &rhs);    // Copy assignment
    Mystring &operator=(Mystring &&rhs);          // Move assignment

    void display() const;

    int get_length() const;                                        // getters
    const char *get_str() const;
};

#endif // _MYSTRING_H_
