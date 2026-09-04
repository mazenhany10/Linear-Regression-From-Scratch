#include <iostream>
#include <string>
using namespace std;
int main() {
    string s1{"tarek"};
    string s2{"tarek"};
    string s3{"Mazen"};
    string *s1_ptr{&s1};
    string *s2_ptr{&s2};
    string *s3_ptr{&s1};
    cout << boolalpha;
    cout << s1 << " == "<< s2 <<" "<< (s1==s2) << endl;
    cout << s1 << " == "<< s3 <<" "<< (s1==s3) << endl;
    
    
    cout << s1_ptr <<"=="<< s2_ptr<<" "<<(s1_ptr==s2_ptr)<<endl;
    cout << s1_ptr <<"=="<< s3_ptr<<" "<<(s1_ptr==s3_ptr)<<endl;
    cout << *s1_ptr <<"=="<< *s2_ptr<<" "<<(*s1_ptr==*s2_ptr)<<endl;
    cout << *s1_ptr <<"=="<< *s2_ptr<<" "<<(*s1_ptr==*s2_ptr)<<endl;
    cout << *s2_ptr <<"=="<< *s3_ptr<<" "<<(*s2_ptr==*s3_ptr)<<endl;
    s3_ptr=&s3;
    cout << *s2_ptr <<"=="<< *s3_ptr<<" "<<(*s2_ptr==*s3_ptr)<<endl;
    cout << s2_ptr <<"=="<< s3_ptr<<" "<<(s2_ptr==s3_ptr)<<endl;
    cout <<"\n----------------------"<<endl;
    
    char name[]{"Mazen"};
    
    char *name_ptr1{nullptr};
    char *name_ptr2{nullptr};
    name_ptr1=&name[0]; //m
    name_ptr2=&name[4];
    cout << "In the string " <<name<<" "<< *name_ptr2<< " is "<< (name_ptr2-name_ptr1)<<" away from "<<*name_ptr1;

    cout<<endl;
    return 0;
}

