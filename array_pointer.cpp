#include <iostream>
using namespace std;
int main() {

    
    int scores []{100,84,90};
    cout << scores <<endl;
    int *scores_ptr{scores};
    cout << scores_ptr <<endl;
    
    
    cout<<"\nArray subscript notation __________________"<<endl;
    cout<< scores[0]<<endl;
    cout<< scores[1]<<endl;
    cout<< scores[2]<<endl;
    cout<<"\nPointer subscript notation __________________"<<endl;
    cout <<scores_ptr[0]<<endl;
    cout <<scores_ptr[1]<<endl;
    cout <<scores_ptr[2]<<endl;
    cout<<"\nArray offset notation __________________"<<endl;
    cout<<*(scores)<<endl;
    cout<<*(scores+1)<<endl;
    cout<<*(scores+2)<<endl;
    
    cout<<"\nPointer offset notation __________________"<<endl;
    cout<<*(scores_ptr)<<endl;
    cout<<*(scores_ptr+1)<<endl;
    cout<<*(scores_ptr+2)<<endl;
    cout<<endl;
    return 0;
}
