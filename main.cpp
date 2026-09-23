#include <iostream>
#include <vector>
using namespace std;
class Move
{
private:
    int *data;
public:
    void set_data_value(int d){*data=d;}
    int get_data_value(){return *data;}
    Move (int d);
    Move(const Move&source );
    Move(Move&& source) noexcept;
    ~Move();
    
};
Move::Move(int d ){
    data = new int;
    *data =d ;
    cout << "constructor for "<< d <<endl;
};


Move::Move(const Move &source )
:Move{*source.data}{
    cout <<"copy move constructor "<< *data << endl ;
    
}
//move con
Move::Move(Move &&source) noexcept
:data{source.data}{
    source.data=nullptr;
    cout<< "move constructor - remove the source "<<endl;
}

Move::~Move()
{
    if (data !=nullptr){
        cout << "destructor is freeing data "<< *data<<endl;
    }else {
        cout << "Destructor is freing data for null ptr"<< endl;
    }
    delete data;
    cout << "delete"<< endl;
}


int main() {
    vector<Move>vec;
    vec.push_back(Move{10});
    vec.push_back(Move{20});
    vec.push_back(Move{30});
    vec.push_back(Move{40});
    vec.push_back(Move{50});
    vec.push_back(Move{60});
    vec.push_back(Move{70});
    vec.push_back(Move{80});
}
