#include <iostream>
#include <string>
using namespace std;
int main() {
    int scores []{100,25,98,65,63,-1};
    int *scores_ptr{scores};
    
    while (*scores_ptr!=-1) {
        cout << *scores_ptr <<endl;
        scores_ptr++;
    }
    cout << "\n-------------------"<<endl;
    scores_ptr = scores;
    while (*scores_ptr!=-1) {
        cout << *scores_ptr++<<endl;
       
    }
    
    cout<<endl;
    return 0;
}

