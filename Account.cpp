#include <iostream>
#include "Account.h"
using namespace std;

Account::Account()
:balance{0.0},name{"mazen's account"}{
    
}

Account::~Account(){
    
}

void Account::deposit(double amount){
    cout << "Account deposit called with "<< amount << endl;

}
void Account::withdraw(double amount){
    cout << "Account withdraw called with "<< amount << endl;

}
