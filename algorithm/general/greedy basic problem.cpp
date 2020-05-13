#include <bits/stdc++.h>
using namespace std;

int main ()
{
    vector <int> ans;
    vector <int> coins = {1, 2,5,10,20,50,100,500};
    int credit, cnt=0;
    cin >> credit;
    for(int i=coins.size()-1; i>=0; i--){
        while(coins[i] <= credit){
            credit=credit-coins[i];
            ans.push_back(coins[i]);
            cnt++;
        }
    }
    cout << "Number of coin : " << cnt << endl;
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << endl;
    }
}
