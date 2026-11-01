
#include <iostream>
#include <memory>
#include <vector>
using namespace std;

class Test
{
private:
    int data;

public:
    Test() : data{0} { cout << "\tTest constructor (" << data << ")" << std::endl; }
    Test(int data) : data{data} { cout << "\tTest constructor (" << data << ")" << std::endl; }
    int get_data() const { return data; }
    ~Test() { cout << "\tTest destructor (" << data << ")" << endl; }
};

// Function prototypes
unique_ptr<vector<shared_ptr<Test>>> make()
{
    auto ptr = make_unique<vector<shared_ptr<Test>>>();
    return ptr;
}

void fill(vector<shared_ptr<Test>> &vec, int num)
{
    for (int i = 0; i < num; i++)
    {
        int data;
        cout << "Enter the number: " << endl;
        cin >> data;
        auto ptr = make_shared<Test>(data);
        vec.push_back(ptr);
    }
}
void display(const vector<shared_ptr<Test>> &vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i]->get_data() << endl;
    }
}

int main()
{
    unique_ptr<vector<shared_ptr<Test>>> vec_ptr;
    vec_ptr = make();
    cout << "How many data points do you want to enter: ";
    int num;
    cin >> num;
    fill(*vec_ptr, num);
    display(*vec_ptr);
    return 0;
}
