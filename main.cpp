#include <vector>
#include <iostream>
using namespace std;

vector<int> use_vector() {
    //----WRITE YOUR CODE BELOW THIS LINE----
    vector<int> vector1 ;
    vector<int> vector2 ;
    
    vector1.push_back(10);
    vector1.push_back(20);
    vector2.push_back(100);
    vector2.push_back(200);
    cout<< "vector 1"<<endl;
    cout<<vector1.at(0)<<endl;
    cout<<vector1.at(1)<<endl;
    cout<< "vector 1 size"<<endl;
    cout << vector1.size()<<endl;
    cout<< "vector 2"<<endl;
    cout<<vector2.at(0)<<endl;
    cout<<vector2.at(1)<<endl;
    cout<< "vector 2 size "<<endl;
    cout << vector2.size()<<endl;
    cout<< "vector 2d"<<endl;
    vector<vector<int>> vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    
    cout<<vector_2d.at(0).at(0)<<endl;
    cout<<vector_2d.at(0).at(1)<<endl;
    cout<<vector_2d.at(1).at(0)<<endl;
    cout<<vector_2d.at(1).at(1)<<endl;
    vector1.at(0) = 1000;
    cout<< "vector_2d before "<<endl;
    cout<<vector_2d.at(0).at(0)<<endl;
    cout<<vector_2d.at(0).at(1)<<endl;
    cout<<vector_2d.at(1).at(0)<<endl;
    cout<<vector_2d.at(1).at(1)<<endl;
    cout<< "vector 1 after changing "<<endl;

    cout<<vector1.at(0)<<endl;
    cout<<vector1.at(1)<<endl;
    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----NO NOT MODIFY THE CODE BELOW THIS LINE----
    return vector1;
}
int main() {
    vector<int> result = use_vector();
    return 0;
}
