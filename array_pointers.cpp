#include <iostream>
#include <string>
#include <vector>

using namespace std;
void display (int *array, int last_arr){
    while (*array!=last_arr) {
        cout <<*array++<<endl;
    }
    
}

int main() {
    
    int scores[]{100,123,487,900,9097};
    display(scores,9097);
    
    cout<<endl;
    return 0;
}
