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


#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <map>
#include <math.h>

using namespace std;

bool cntdivisor(long long num)
{
    if(num==1)return false;
    int y = sqrt(num);

    if((float)y==sqrt(num)){
        for(int i=2; i<=sqrt(y); i++){
            if(y%i==0)return false;
        }
        return true;
    }
    else return false;
}

int main ()
{
    int n;
    cin >> n;
    while(n--)
    {
        long long number;
        cin >> number;
        if(cntdivisor(number)){
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}

