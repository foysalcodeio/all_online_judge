#include<bits/stdc++.h>

using namespace std;

void solve(){
   int waterMelon;
   cin>>waterMelon;
   for(int pete = 1 ; pete < waterMelon ; pete++){
       int billy = waterMelon - pete;
       if(pete%2== 0 && billy%2 == 0){
           cout<<"YES"<<endl;
           return ;
       }
   }
   cout<<"NO"<<endl;
}
int main(){
    
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    solve();
}