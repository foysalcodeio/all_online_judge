////signed solve()
////{
////    ios_base::sync_with_stdio(false);
////    cin.tie(0);
////
////    int q;
////    cin >> q;
////
////    stack <int> s1;
////    stack <int> s2;
////
////    for(int i=0; i!=q; i++)
////    {
////        int a;
////        cin >> a;
////        if(a==1)
////        {
////            int b;
////            cin >> b;
////            s1.push(b);
////        }
////        else if(a==2)
////        {
////            if(s2.empty())
////            {
////                while(!s1.empty())
////                {
////                    int data = s1.top();
////                    s1.pop();
////                    s2.push(data);
////                }
////            }
////            s2.pop();
////        }
////        else if(a==3)
////        {
////            if(s2.empty()==true)
////            {
////                while(!s1.empty())
////                {
////                    int data = s1.top();
////                    s1.pop();
////                    s2.push(data);
////                }
////            }
////            cout << s2.top()<<endl;
////        }
////    }
////}
////int main ()
////{
////    solve();
////    return 0;
////}
//
////https://www.hackerrank.com/rest/contests/master/challenges/queue-using-two-stacks/hackers/mmirzhana13/download_solution
////https://www.hackerrank.com/rest/contests/master/challenges/queue-using-two-stacks/hackers/ashishchopra255/download_solution
////https://www.hackerrank.com/rest/contests/master/challenges/queue-using-two-stacks/hackers/arpitad10/download_solution
//void transfer(stack<long>&from, stack<long>&to)
//{
//    while(from.empty()==false)
//    {
//        to.push(from.top());
//        from.pop();
//    }
//}
//int main()
//{
//    stack<long>outstack;
//    stack<long>instack;
//
//    int n;
//    cin >> n;
//    for(int i=0; i!=n; i++)
//    {
//        int type, x;
//        cin >> type;
//        switch(type)
//        {
//        case 1:
//            cin >> x;
//            instack.push(x);
//            break;
//        case 2:
//            if(outstack.empty())
//            {
//                transfer(instack, outstack);
//            }
//            outstack.pop();
//            break;
//        case 3:
//            if(outstack.empty())
//                transfer(instack, outstack);
//            cout << outstack.top() << endl;
//            break;
//        default:
//            break;
//        }
//    }
//    return 0;
//}


////https://www.hackerrank.com/rest/contests/master/challenges/queue-using-two-stacks/hackers/nwhitcher/download_solution
/*
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int mat[100][100];
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        mat[n][n];
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++){
                cin >> mat[i][j];
            }
        }
        int sum=0;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(i==j){
                    sum=sum+mat[i][j];
                }
            }
        }
        cout << sum << endl;
    }
}
*/

/*
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int x, y, r, p, q;
    cin >> x >> y >> r >> p >> q;

    int dis = sqrt(pow(x-p, 2)+(y-q, 2));
    int d = pow(dis, 2);

    if(d<=r*r){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
}

*/

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
int main ()
{
    string str;
    int flag=1;
    cin >> str;
    for(int i=0; i<str.size(); i++){
        if(str[i]=='W' && str[i+1]=='U' && str[i+2]=='B'){
            i+=2;
            if(!flag){
                cout << " ";
            }
            continue;
        }
        else{
            flag=0;
            cout << str[i];
        }
    }
    return 0;
}
