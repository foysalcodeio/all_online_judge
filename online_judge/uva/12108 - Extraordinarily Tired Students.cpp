#include <bits/stdc++.h>
using namespace std;
int lcm(int a, int b)
{
    return a*b/__gcd(a, b);
}
int n;
int arr[13][3];
int status[13];

bool update()
{
    int cnt=0;
    for(int i=0; i<n; i++){
        if(status[i]<=arr[i][0])
            cnt++;
    }
    if(cnt==n)return true;
    for(int i=0; i<=n; i++)
    {
        if(status[i]==arr[i][0]+arr[i][1] || (status[i]==arr[i][0] && n<=cnt*2))
            status[i]=1;
        else status[i]++;
    }
    return false;
}
int main ()
{
    int t=1;
    while(1)
    {
        scanf("%d", &n);
        if(n==0)break;
        int l=1;
        for(int i=0; i<n; i++)
        {
            scanf("%d%d%d", &arr[i][0], &arr[i][1], &arr[i][2]);
            status[i]=arr[i][2];
            l = lcm(l, arr[i][0]+arr[i][1]);
        }
        bool found;
        for(int i=1; i<=l; i++)
        {
            found=update();
            if(found){
                printf("Case %d: %d\n", t++, i);
                break;
            }
        }
        if(!found){
            printf("Case %d: -1\n", t++);
        }
    }
    return 0;
}
