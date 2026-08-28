

#include <iostream>
#include <vector>
using namespace std;
int main() {
    char selection {};
    vector<int> numbers {};
    do {
        cout << "P _ Print numbers "<<endl;
        cout << "A _ Add numbers "<<endl;
        cout << "M _ Display the mean of the numbers "<<endl;
        cout << "S _ Display the smallest number "<<endl;
        cout << "L _ Display the largest number"<<endl;
        cout << "Q _ Quit "<<endl;
        cout << "Enter charecter: ";
        cin >> selection;
        if (selection=='P' || selection=='p') {
            if (numbers.size()==0) {
                cout << "There are no numbers to display" << endl;
            } else {
                cout << "[ ";
                for (int i = 0; i < numbers.size(); i++) {
                    cout << numbers.at(i) << " ";
                }
                cout << "]" << endl;
            }
        }

        
        if (selection=='A' ||selection=='a'){
            cout << "Add numbers "<<endl;
            int the_new_number{0};
            cout<< "Enter a new number ";
            cin >> the_new_number;
            numbers.push_back (the_new_number);
            cout << the_new_number << " added" << endl;
        }
        if (selection=='M' || selection=='m') {
            if (numbers.size()==0) {
                cout << "Unable to calculate the mean - no data" << endl;
            } else {
                int sum {0};
                for (int i = 0; i < numbers.size(); i++) {
                    sum += numbers.at(i);
                }
                cout << "The mean is: " << sum / numbers.size() << endl;
            }
        }
        
        
        if (selection=='S' || selection=='s') {
                   if (numbers.size()==0) {
                       cout << "Unable to determine the smallest number - list is empty" << endl;
                   } else {
                       int smallest = numbers.at(0);
                       for (int i = 0; i < numbers.size(); i++) {
                           if (numbers.at(i) < smallest) {
                               smallest = numbers.at(i);
                           }
                       }
                       cout << "The smallest number is " << smallest << endl;
                   }
               }
        if (selection=='L' || selection=='l') {
                    if (numbers.size()==0) {
                        cout << "Unable to determine the largest number - list is empty" << endl;
                    } else {
                        int largest = numbers.at(0);
                        for (int i = 0; i < numbers.size(); i++) {
                            if (numbers.at(i) > largest) {
                                largest = numbers.at(i);
                            }
                        }
                        cout << "The largest number is " << largest << endl;
                    }
                }
        } while (selection !='q'&& selection!='Q');
        cout << "Good bye "<<endl;
        cout << endl;
        
    
    }

