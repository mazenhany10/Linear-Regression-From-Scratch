#include <iostream>
using namespace std;
int main() {
    const int dollars_value=100;
    const int quarter_value=25;
    const int dime_value=10;
    const int nickel_value=5;
    int change_amount;
    cout << "Enter the number in cents: ";
    cin >>change_amount;
    int balance {}, dollars {}, quarters {}, dimes {}, nickels {}, pennies {};
    dollars=change_amount/dollars_value;
    balance=change_amount%dollars_value;
    quarters=balance/quarter_value;
    balance=balance%quarter_value;
    dimes=balance/dime_value;
    balance=balance%dime_value;
    nickels=balance/nickel_value;
    balance=balance%nickel_value;
    pennies=balance;
    cout<<"Dollars: "<<dollars<<endl;
    cout<<"Quarter: "<<quarters<<endl;
    cout<<"Dime: "<<dimes<<endl;
    cout<<"Nickel: "<<nickels<<endl;
    cout<<"pennies: "<<pennies<<endl;
    
    
    
    
    return 0;
}
