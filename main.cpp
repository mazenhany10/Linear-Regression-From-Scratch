#include <iostream>
#include <vector>
using namespace std;
void displayMenu(){
    cout << "\nP - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number"<< endl;
    cout<< "F - Find a number"<<endl;
    cout << "Q - Quit" << endl;
    cout << "\nEnter your choice: ";
}
void printNumbers(const vector<int>& number) {
    if (number.empty())
        cout << "[] - the list is empty" << endl;
    else {
        cout << "[";
        for (auto num : number)
            cout << num << " ";
        cout << "]" << endl;
    }
}
void addNumbers(vector<int>& number){
        int add_a_number;
        cout<<"Add a number: ";
        cin>>add_a_number;
        number.push_back(add_a_number);
        cout << add_a_number<< " added" << endl;
    
}
void mean (const vector<int>& number){
    
    int total = 0;
    if (number.size()==0) {
        cout << "Unable to calculate mean - no data" << endl;
    } else {
        for(auto num:number)
            total+=num;
        
        cout<<"mean is ["<<static_cast<double>(total)/number.size()<<"]"<<endl;;
        
    }
}
void smallestNumber(const vector<int>& number){
    if (number.size()==0)
        cout << "can't get the smallest num " << endl;
    else{
        int smallest=number.at(0);
        for(auto num:number)
            if(smallest>num)
                smallest=num;
        cout<< " the smallest number is "<<smallest<<endl;
        
    }
}
void largestNumber(const vector<int>& number){
                if (number.size()==0)
                    cout << "can't get the Largest num " << endl;
                else{
                    int largest=number.at(0);
                    for(auto num:number){
                        if(largest<num)
                            largest=num;
                    } cout<< " the largest number is "<<largest<<endl;
                }
        }
void quit(){
    cout << "Goodbye" << endl;
}
char get_selection()
{
    char selection;
    cin >>selection;
    return toupper(selection);
}
bool find(const vector<int>&number,int target){
    for(auto num:number)
        if (num==target)
            return true;
    return false;
}
void handelFind(const vector<int>&number){
    int target{};
    cout << "3ayz eh ";
    cin>>target;
    if (find(number,target))
        cout<<target<<"target is found";
    else
        cout<<target<<"target was no t found";
}

int main() {
    vector<int>number;
    char selected;
    do {
        displayMenu();
        selected=get_selection();
        switch (selected) {
           
            case 'P':
                printNumbers(number);
                break;
          
            case 'A':
                addNumbers(number);
                break;
            case 'M':
          
                mean(number);
                break;
           
            case 'S':
                smallestNumber(number);
                break;
            case 'L':
         
                largestNumber(number);
                break;
            case'F':
                handelFind(number);
                break;
            case 'Q':
                quit();
                break;
            default:
                cout << "Unknown selection, please try again" << endl;
                break;
        }
        
    } while (selected != 'q' && selected != 'Q');

    cout  << endl;
    return 0;
}
