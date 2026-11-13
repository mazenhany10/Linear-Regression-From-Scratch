#include <iostream>
using namespace std;

class School {
private:
    int id ;
    int level;
    string name;
    
public:
    void set(string n,int i);
    void set(int l);
    
};
void School::set(string n,int i){
    name=n;
    id=i;
    cout <<"name "<<name<<endl <<"id "<<id<<endl;
}
void School::set(int l){
    level=l;
    cout<<"level "<<level<<endl;
}
int main() {
   
 
    School st;
    st.set("mazen",90);
    st.set(10);
  
    
}
