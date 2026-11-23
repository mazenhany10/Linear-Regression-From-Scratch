#include <iostream>
#include <string>
using namespace std;
int main() {
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key {"IXZNLWEBGJHQDYVTKFUOMPCIASRxznwebgjhqdyvtkfuompciasri"};
    cout<<"Enter your secret message: ";
    string secretMessage;
    getline(cin, secretMessage);
    string encrepted_message;
    for(char c:secretMessage){
        size_t position =alphabet.find(c);
        if(position!=string::npos){
            char new_char(key.at(position));

            encrepted_message += new_char;
        }else encrepted_message+=c;
    }
    cout<<"Encrepted message: ["<<encrepted_message<<"]"<<endl;
    cout << "Enter the message you want to decrept: ";
    string deeMesage;
    getline(cin,deeMesage);
    string realMessage;
    for(char z :deeMesage){
        size_t position=key.find(z);
        if(position!=string::npos){
            char newChar(alphabet.at(position));
            realMessage+=newChar;
        }else realMessage+=z;
    }
    cout<<"Real message: ["<<realMessage<<"]"<<endl;
    
    
    
   
      
}
