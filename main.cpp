#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int>number;
    char selected;
    do {
        cout << "\nP - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number"<< endl;
        cout << "Q - Quit" << endl;
        cout << "\nEnter your choice: ";
        cin >> selected;
        if (selected=='p'||selected=='P'){
           if (number.size()==0)
               cout << "[] - the list is empty" << endl;
           else{
               cout<<"[";
               for(auto num:number)
                   cout<<num<<" ";
               cout<<"}";
           }
        }else if (selected=='a'||selected=='A'){
            int add_a_number;
            cout<<"Add a number";
            cin>>add_a_number;
            number.push_back(add_a_number);
            cout << add_a_number<< " added" << endl;
        }else if (selected=='M'||selected=='m'){
            int total = 0;
            if (number.size()==0) {
                cout << "Unable to calculate mean - no data" << endl;
            } else {
                for(auto num:number)
                    total+=num;
                
                cout<<"mean is ["<<static_cast<double>(total)/number.size()<<"]"<<endl;;
            }
        }else if(selected=='S'||selected=='s'){
            if (number.size()==0)
                cout << "can't get the smallest num " << endl;
            else{
                int smallest=number.at(0);
                for(auto num:number)
                    if(smallest>num)
                        smallest=num;
                cout<< " the smallest number is "<<smallest<<endl;
                    
                    
            }
        }else if(selected=='l'||selected=='L'){
            if (number.size()==0)
                cout << "can't get the Largest num " << endl;
            else{
                int largest=number.at(0);
                for(auto num:number){
                    if(largest<num)
                        largest=num;
                } cout<< " the largest number is "<<largest<<endl;
            }
        } else if (selected == 'Q' || selected == 'q') {
            cout << "Goodbye" << endl;
        } else {
            cout << "Unknown selection, please try again" << endl;
        }
    } while (selected != 'q' && selected != 'Q');

    cout  << endl;
    return 0;
}

