/**
    problem :
    Md. Foysal Ahammed
    ----------------------------------------------------
                    ..Think Big...
    Don't afraid fail. It's help one step making stronger...
**/

#include <bits/stdc++.h>
#include <stdio.h>
#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

#define rep(i,n) for(i=0; i<n; i++)
#define pb(x) push_back(x)
#define sf(a) scanf("%d", &a)
#define sf1(a,b) scanf("%d%d", &a, &b)
#define pf(a) printf("%d", &a)
#define pf2(a, b) printf("Case %d: %d\n", a, b)
#define pii pair<int, int>
#define mem(x,y) memset(x, y, sizeof(x))
#define MOD 20071027
#define lim 100000000

int marked[lim/64+2];
#define on(x) (marked[x/64] & (1<<((x%64)/2)
#define mark(x) marked[x/64] |= (1<<((x%64)/2))

int main ()
{
    string str;
    //getline(cin, str)

    while(getline(cin, str), str!="DONE")
    {
        string store;

        for(int i=0; i<str.size(); i++)
        {
            if(isalpha(str[i])){
                str[i]=tolower(str[i]);
            }
        }
        store=str;
        reverse(str.begin(), str.end());

       // cout << str << endl;
        if(str==store){
            cout << "You won't be eaten!" << endl;
        }
        else{
            cout << "Uh oh.." << endl;
        }
    }
    return 0;


}
