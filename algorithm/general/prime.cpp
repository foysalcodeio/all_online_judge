#include <bits/stdc++.h>
using namespace std;
int status[2500];
int main ()
{
    int n;
    cin >> n;
    for(int i=2; i<=n>>1; i++)
        status[i]=0;

    int sq = int(sqrt((double)n));

    for(int i=3; i<=sq; i+=2)
    {
        if(status[i>>1]==0)
        {
            for(int j=i*i; j<=n; j+=i+i)
                status[j>>1]=1;
        }
    }
    cout << "2 ";
    for(int i=3; i<=n; i+=2)
        if(status[i>>1]==0)
        cout << i << " ";

    return 0;
}
