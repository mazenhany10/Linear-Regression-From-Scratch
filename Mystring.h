#ifndef _MYSTRING_H_
#define _MYSTRING_H_
class Mystring {
private:
    char *str;

public:
    Mystring();    //no cons
    Mystring(const char *s);      // overloaded
    Mystring(const Mystring &source);     //copy
    Mystring( Mystring &&source);        //move
    ~Mystring();            // dest
    Mystring &operator=(const Mystring &rhs);
    Mystring &operator=(Mystring &&rhs); //move assignment

    void display() const;
    int get_lenth() const;         // Changed from void to int
    const char* get_str() const;
};

#endif // !_MYSTRING_H_
