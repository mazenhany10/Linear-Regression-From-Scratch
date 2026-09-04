#include <iostream>
#include <string>
using namespace std;
int main() {
    string s1{"tarek"};
    string s2{"tarek"};
    string *s1_ptr{&s1};
    string *s2_ptr{&s2};
    string *s3_ptr{&s1};
    cout << boolalpha;
    cout << (s1_ptr==s2_ptr)<< endl;
    cout << (s1_ptr==s3_ptr)<< endl;
    
    cout << (*s1_ptr==*s2_ptr)<< endl;
    cout << (*s2_ptr==*s3_ptr)<< endl;
    cout << (*s1_ptr==*s3_ptr)<< endl;
    cout<<endl;
    return 0;
}

