
#include <iostream>
#include <iomanip> // Must include for manipulators
using namespace std;
int main()
{

    cout << "noboolalpha - default  (10 == 10) : " << (10 == 10) << endl;
    cout << "noboolalpha - default  (10 == 20) : " << (10 == 20) << endl;

    // Set to true/false formatting
    cout << std::boolalpha; // change to true/false
    cout << showpos;
    cout << "boolalpha   (10 == 10) : " << (10 == 10) << endl;
    cout << "boolalpha   (10 == 20) : " << (10 == 20) << endl;

    // setting still stays for future boolean insertions
    cout << "boolalpha   (10 == 10) : " << (10 == 10) << endl;
    cout << "boolalpha   (10 == 20) : " << (10 == 20) << endl;

    // Toggle to 0/1
    cout << std::noboolalpha;
    cout << "noboolalpha  (10 == 10) : " << (10 == 10) << endl;
    cout << "noboolalpha  (10 == 20) : " << (10 == 20) << endl;

    // Set back to true/false using setf method
    cout.setf(ios::boolalpha);
    cout << "boolalpha   (10 == 10) : " << (10 == 10) << endl;
    cout << "boolalpha   (10 == 20) : " << (10 == 20) << endl;

    // resets to default which is 0/1
    cout << std::resetiosflags(ios::boolalpha);
    cout << "Default  (10 == 10) : " << (10 == 10) << endl;
    cout << "Default  (10 == 20) : " << (10 == 20) << endl;
    int x{10};
    int y{-900};
    cout << showpos << "x = " << x << ", y = " << y << endl;
    int z = 90;
    cout << "z = " << z << endl;
    cout.setf(ios::showbase);
    cout << hex << "z HEX = " << z << endl;
    cout << oct << "z oct = " << z << endl;
    cout << dec << "z DEC = " << z << endl;
    return 0;
}
