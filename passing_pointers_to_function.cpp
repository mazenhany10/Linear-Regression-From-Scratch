#include <iostream>
#include <string>
#include <vector>

using namespace std;
void display (vector<string> *v){
    for(auto str:*v)
        cout << str <<endl;
    
}

int main() {
    
    vector<string>stooges {"Mazen","Malak","Nada"};
    display(&stooges);
    
    cout<<endl;
    return 0;
}
