//
// Program that demonstrates
// encryption of given string using Ceasar Cipher
// file: main.cpp
// author: Yug Patel
// 
#include <iostream>
#include <string>

using std::endl; using std::cin; using std::cout;
using std::string;
int main(){
    cout<<"Encryption with Ceasar Cipher\n";
    cout<<"Enter your name: ";
    string plainText;
    cin>>plainText;

    string cipherText = plainText;

    for(int i = 0; i < plainText.size(); ++i){

        int x = static_cast<int>(plainText[i]) - 'a';
        x = (x + 3) % 26 + 97;
        char y = static_cast<char>(x); 
        cipherText[i] = y;
    }

    cout<<"Encrypted Name: " << cipherText <<endl;

}
