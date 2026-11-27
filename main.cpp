#include <iostream>

using namespace std;
int *apply_all(int const *array1, size_t  array1_size,int const *array2, size_t array2_size){
        int *result=new int [ array1_size*array2_size];
    size_t pos = 0;
    for (size_t j=0; j<array2_size; j++) {
        for (size_t i=0; i< array1_size; ++i) {
            result[pos++] = array1[i] * array2[j];

        }
    }
    return result;
    }
int *add_all(int const *array1, size_t  array1_size,int const *array2, size_t array2_size){
    int *equal=new int[array1_size*array2_size];
    size_t dos=0;
    for(size_t j=0;j<array2_size;j++){
        for (size_t i=0; i<array1_size; ++i) {
            equal[dos++]= array1[i] + array2[j];
        }
    }return equal;
    
}

void print(int *array1,size_t array1_size){
    cout<<"[";
    for(int i=0;i<array1_size;i++){
        cout<<array1[i]<<" ";
    }cout<<"]"<<endl;
}
int *minesall(int const *array1,size_t array1_size,int const *array2,size_t array2_size){
    int *nateg= new int[array1_size*array2_size];
    size_t lol=0;
    for(size_t j=0;j<array2_size;j++){
        for (size_t i=0; i<array1_size; i++) {
            nateg[lol++]= array1[i] - array2[j];
        }
    }return nateg;
}

int main() {
    const size_t array1_size {5};
    const size_t array2_size {3};
    
    int array1[] {1,2,3,4,5};
    int array2[] {10,20,30};
    
    cout << "Array 1: " ;
    print(array1,array1_size);
    
    cout << "Array 2: " ;
    print(array2,array2_size);
    
    int *results = apply_all(array1, array1_size, array2, array2_size);
    constexpr size_t results_size {array1_size * array2_size};

    cout << "Result: " ;
    print(results, results_size);
    
    cout << endl;
    
    int *equal = add_all(array1, array1_size, array2, array2_size);
    cout << "Result: ";
    print(equal, array1_size * array2_size);
    delete [] equal;
    
    
    
    

    return 0;
}
