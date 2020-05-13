//int fabo(int n)
//{
//    if(n==0 || n==1)return 1;
//    else return fabo(n-1)+fabo(n-2);
//}
//int arr[20];
//int fibo(int n)
//{
//    if(n==0 || n==1)return 1;
//    else if(arr[n]==0){
//        arr[n]=fibo(n-1)+fibo(n-2);
//    }
//    return arr[n];
//}
//void print_rev(int i, int n, int *a)
//{
//    if(i<=n){
//        cout << a[i] << " " << a[n] << endl;
//        print_rev(i+1, n-1, a);
//    }
//}
//int main ()
//{
//    int n, a[10];
//    cin >> n;
//    for(int i=0; i<n; i++){
//        cin >> a[i];
//    }
//
//    print_rev(0, n-1, a);
//    cout << endl;
//
//}

///https://codeforces.com/problemset/problem/208/A
#include <bits/stdc++.h>
using namespace std;

vector <string>v;

void solve()
{
    string str;
    getline(cin, str);

    for(int i=0; i<str.length(); i++)
    {
        if(str[i]=='W' && str[i+1]=='U' && str[i+2]=='B')
        {
            str[i]='0';
            str[i+1]='0';
            str[i+2]='0 ';
        }
    }
    for(int i=0; i<str.length(); i++)
    {
        if(str[i]=='0')continue;
        cout <<str[i];
    }
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    solve();
    return 0;
}
