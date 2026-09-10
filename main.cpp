#include <iostream>
#include <string>
#include <vector>
using namespace std;
#include "Account.hpp"
int main(){
    Account mazen_account;
    mazen_account.set_name("Mazen's account");
    mazen_account.set_balance(100000);
    if (mazen_account.deposit(900))
        cout<<"ok deposit"<<endl;
    else
        cout <<"deposit is not allowed"<<endl;
    
    if (mazen_account.withdraw(300))
        cout<<"ok withdaw"<<endl;
    else
        cout<<"not sufficient funds"<<endl;
    
    if (mazen_account.withdraw(300000))
        cout<<"ok withdaw"<<endl;
    else
        cout<<"not sufficient funds"<<endl;
    cout << "Account name: " << mazen_account.get_name() << endl;
    cout << "Balance: " << mazen_account.get_balance() << endl;
    
}
