//
//  main.cpp
//  Letter Pyramid
//
//  Created by Mazenn  on 29/08/2026.
//

#include <iostream>
#include <string>
using namespace std;
int main() {
    string letters  {};
    cin >>letters;
    
    for (int i =0; i < letters.length(); i++) {
        for (int space =0; space < letters.length()-1-i ; space ++) {
            cout << " ";
        }cout << letters.substr(0, i+1);
        for (int j = i - 1; j >= 0; j--) {
                   cout << letters.at(j);
               }
               
               cout << endl;
           }
           
           return 0;
       }
