#include <iostream>
using namespace std;
int main() {
    cout << "Frank's Carpet Cleaning Service"<< endl;
    cout<< " how many small rooms";
    int small_rooms{0};
    cin >> small_rooms;
    cout<< " how many large rooms";
    int large_rooms{0};
    cin >> large_rooms;
    const double price_of_small_room{15};
    const double price_of_large_room{40};
    const double tax_rate{0.06};
    const int estimate_days{30};
    // Calculate costs
    const double cost_small = price_of_small_room * small_rooms;
    const double cost_large = price_of_large_room * large_rooms;
    const double subtotal = cost_small + cost_large;
    const double tax = subtotal * tax_rate;
    const double total = subtotal + tax;

    cout << "Price per small room: $" << price_of_small_room << endl;
    cout << "Price per large room: $" << price_of_large_room << endl;
    cout << "Cost: $" << subtotal << endl;
    cout << "Tax: $" << tax << endl;
    cout << "====================================" << endl;
    cout << "Total estimate: $" << total << endl;
    cout << "This estimate is valid for " << estimate_days << " days" << endl;

    return 0;
}
