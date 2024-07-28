#include <bits/stdc++.h>
#include <bitset>
using namespace std;

int any_binary(int num){
    string binary="";
    //doing loop and store bit in string
    for(int i=31; i>=0; i--){
        binary+=((num>>i)&1)?'1':'0';
    }
    //first all digit we remove
    size_t all_element = binary.find('1');
    if(all_element!=string::npos){
        binary = binary.substr(all_element);
    }else{
        binary="0";
    }
    reverse(binary.begin(), binary.end());
    cout << binary;
}
int main(){
    int x;
    cin >> x;
    any_binary(x);
    return 0;
}
