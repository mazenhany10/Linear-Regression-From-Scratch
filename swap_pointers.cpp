#include <iostream>
#include <string>
using namespace std;
int main() {
    int a {5};
    int b {10};
    int *ptrA {&a};
    int *ptrB {&b};
    int *tmp = ptrA;
    ptrA = ptrB;
    ptrB = tmp;

    cout << "ptrA points to: " << *ptrA << ", ptrB points to: " << *ptrB << endl;

    cout<<endl;
    return 0;
}
