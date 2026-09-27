#ifndef _MYSTRING_H_
#define _MYSTRING_H_
class Mystring {
private:
    char *str;

public:
    Mystring();
    Mystring(const char *s);
    Mystring(const Mystring &source);
    ~Mystring();

    void display() const;
    int get_lenth() const;         // Changed from void to int
    const char* get_str() const;
};

#endif // !_MYSTRING_H_
