#include <iostream>
#include <string>
#include <vector>

using namespace std;
int * largest_int(int *int_ptr1,int *int_ptr2){
    if(*int_ptr1>*int_ptr2){
        return
        int_ptr1 ;
    } else {
           return  int_ptr2;
            
        
    }
}
int main() {
    
    int a{700};
    int b{900};
    int *largest_ptr {nullptr};
    largest_ptr = largest_int(&a,&b);
    cout << *largest_ptr<<endl;

    
    
    cout<<endl;
    return 0;
}
