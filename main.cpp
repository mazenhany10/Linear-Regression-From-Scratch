#include <iostream>
using namespace std;
int main() {
    int large_room;
    int small_room;
    cout<<"Hello, welcome to lolipop's Carpet Cleaning Service"<<endl;
    cout<<endl;
    cout<<"How many small rooms would you like cleaned? ";
    cin >>small_room;
    cout<<"How many large rooms would you like cleaned? ";
    cin >>large_room;
    cout<<"Estimate for carpet cleaning service"<<endl;
    cout<<"Number of small rooms:"<<small_room<<endl;
    cout<<"Number of large rooms:"<<large_room<<endl;
    cout<<"Price per small room: $25"<<endl;
    cout<<"Price per large room: $35"<<endl;
    double cost;
    cost = large_room*35+small_room*25;
    double total_cost;
    total_cost=cost*1.06;
    double tax;
    tax =total_cost-cost;
    cout<<"cost:"<<cost<<"$"<<endl;
    cout<<"tax:"<<tax<<"$"<<endl;
    cout<<"============================"<<endl;
    cout<<"total cost:"<<total_cost<<endl;
    cout<<"This estimate is valid for 30 days"<<endl;
}
