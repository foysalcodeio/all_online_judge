#include <bits/stdc++.h>
#include <iostream>
#include <bitset>
using namespace std;

char toggleCase(char ch){
    if(ch>='A' && ch <= 'Z'){
        ch = ch | 0x20;
    }
    else if(ch>='a' && ch <= 'z'){
        ch = ch & ~0x20;
    }
    return ch;
}
//string to char
string inputString(const string& str)
{
    string result;
    for(char ch : str){
        result+=toggleCase(ch);
    }
    return result;
}

int main()
{
    string input;
    getline(cin, input);
    cout << inputString(input);
    return 0;
}
