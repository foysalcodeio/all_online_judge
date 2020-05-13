#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int is_prime(long long x)
{
    int ans=0;
    for(int i=3; i*i<=x; i+=2)
    {
        if(x%i==0){
            ans=1;
            break;
        }
    }
    return ans;
}
int is_match_square(long long x)
{
    double sqr_root = sqrt(x);
    if(sqr_root==int(sqr_root))return 1;
    else return 0;
}

int main ()
{
    long long n;
    cin >> n;
    long long arr[n];
    for(long long i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    for(long i=0; i<n; i++)
    {
        if(arr[i]==1)cout << "NO" << endl;
        else if(arr[i]==4)cout << "YES" << endl;
        else if(arr[i]%2==0)cout << "NO" << endl;
        else if(is_prime(sqrt(arr[i]))==0 && is_match_square(arr[i])==1)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
