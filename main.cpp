#include <iostream>
using namespace std;
int main(){
    const int pound{100};
    const int half_pound{50};
    const int  Piaster {10};
    int amount {};
    cout << "put the number in Piaster ";
    cin >> amount;
    int balance{},pounds{}, half_pounds{},Piasters{};
    pounds =amount/pound;
    balance=amount%pound;
    
    half_pounds=balance/half_pound;
    balance%=half_pound;
    
    Piasters=balance/Piaster;
    balance%=Piaster;
    cout <<pounds<<endl;
    cout <<half_pounds<<endl;
    cout <<Piasters<<endl;

}



