#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int>vector1;
    vector<int>vector2;
    vector1.push_back(10);
    vector1.push_back(20);
    vector2.push_back(100);
    vector2.push_back(200);
    cout<<vector1.at(0)<<endl;
    cout<<vector1.at(1)<<endl;
    cout<<"vector 1 size:"<<vector1.size()<<endl;
    cout<<vector2.at(0)<<endl;
    cout<<vector2.at(1)<<endl;
    cout<<"vector 2 size:"<<vector2.size()<<endl;
    vector<vector<int>>twoVector;
    twoVector.push_back(vector1);
    twoVector.push_back(vector2);
    cout<<twoVector.at(0).at(0)<<endl;
    cout<<twoVector.at(0).at(1)<<endl;
    cout<<twoVector.at(1).at(0)<<endl;
    cout<<twoVector.at(1).at(1)<<endl;
    vector1.at(0)=1000;
    cout<<twoVector.at(0).at(0)<<endl;
    cout<<twoVector.at(0).at(1)<<endl;
    cout<<twoVector.at(1).at(0)<<endl;
    cout<<twoVector.at(1).at(1)<<endl;
    cout<<"===================="<<endl;
    cout<<vector1.at(0)<<endl;
    cout<<vector1.at(1)<<endl;
}
