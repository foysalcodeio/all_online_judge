#include <bits/stdc++.h>
#include <iostream>
#include <bitset>
using namespace std;
string stringToBinary(string str){
    string strings = "";
    for(char& data:str){
        strings+=bitset<8>(data).to_string();
    }
    return strings;
}
int main(){
    string str;
    getline(cin, str);
    cout << stringToBinary(str) << endl;
    for(size_t i=0; i<str.size(); i++){
        cout << bitset<8>(str.c_str()[i]) << endl;
    }
    return 0;
}
/*
Here is two way write code 1. create manual function 2. using for loop
*/
