#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Account {
private:
    string name;
    double balance;
public:
    void set_balance(double bal){balance=bal;}
    double get_balance(){return balance ;}
    void set_name(string n);
    string get_name();
    bool deposit(double amount);
    bool withdraw(double amount);
    
};
void Account::set_name(string n){
    name = n;
}
string Account::get_name(){
    return name;
}

bool Account::deposit(double amount){
    balance +=amount;
    return true;
}
bool Account::withdraw(double amount){
    if (balance-amount>=0){
        balance -=amount ;
        return true;
        
    } else {
        return false;
    }
}
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
