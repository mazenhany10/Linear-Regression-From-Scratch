#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    int score (100);
    int *score_ptr {&score};
    cout << &score_ptr << endl; // 100
    cout << *score_ptr << endl;
    *score_ptr = 200;
    cout << *score_ptr << endl; // 200
    cout << score << endl;// 200
    
    
    
    double high_temp{100.89};
    double low_temp{10.89};
    double *temp_ptr{&low_temp};
    cout<<*temp_ptr<<endl;
    temp_ptr=&high_temp;
    cout << *temp_ptr<<endl;
    cout << temp_ptr<<endl;
    
    string name{"frank"};
    string *string_ptr{&name};
    cout << *string_ptr<<endl;
    cout << string_ptr<<endl;
    
    
    vector<string>stooges {"Mazen","Nada","Malak"};
    vector<string>*vector_ptr{nullptr};
    vector_ptr=&stooges;
    cout<<"first: "<< (*vector_ptr).at(0)<<endl;
    cout << "stooges"<< endl;
    for (auto stooges: *vector_ptr) {
        cout << stooges << " "<<endl;
    }
    
    
    
    
}
