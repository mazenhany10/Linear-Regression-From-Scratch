#include <iostream>
#include <string>
using namespace std;

double calculate_ave(int miles , int gallons){
    if (gallons==0)
        throw 0;
    if(miles==0||gallons==0)
        throw string {"da negtive yabny"};
    return static_cast<double>(miles)/gallons;
}

int main() {
    int miles{};
    int gallons{};
    double miles_per_gallons{};
    cout << "ENTER MILES: ";
    cin >> miles;
    cout << "ENTER gallons: ";
    cin >> gallons;
    try{
        miles_per_gallons= calculate_ave(miles,gallons);
        cout<<"result "<< miles_per_gallons<<endl;
    }
    catch(int &ex){
        cerr<<"la mafesh divide by 0 yabny"<<endl;
    }
    catch(string &ex){
        cerr<<"da negtiveeeee"<<endl;
    }
    cout<< "bye idioit"<<endl;
    return 0;
}
