#include <iostream>
#include "Account.h"
#include "Savings_account.h"

using namespace std;

int main() {
    
    
    
    
    // code class
    cout << "==========class account========"<<endl;
    Account maz{};
    maz.deposit(2000);
    maz.withdraw(900);
    cout<< endl;
    Account *p_acc{nullptr};
    p_acc=new Account{};
    p_acc->deposit(9000);
    p_acc->withdraw(8000);
    delete p_acc;
    
    
    
    // savings accc
    cout << "==========saving account========"<<endl;
    Savings_Account mazsav{};
    mazsav.deposit(3000);
    mazsav.withdraw(1000);
    
    Savings_Account *psav_acc{nullptr};
    psav_acc=new Savings_Account{};
    psav_acc->deposit(9000);
    psav_acc->withdraw(8000);
    delete psav_acc;

}
