#include <bits/stdc++.h>
using namespace std;
unsigned int v; // we want to see if v is a power of 2
bool f;         // the result goes here

void possibleSubset(const vector<char>&arr, int n)
{
    for(int i=0; i<(1<<n); i++){
        for(int j=0; j<n; j++){
            if(i&(1<<j)){
                cout << arr[j] << ' ';
            }
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    vector <char> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    possibleSubset(arr, n);
    return 0;
}
