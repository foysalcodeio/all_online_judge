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
using namespace std;
vector <int> temparray(string pattern)
{
    vector <int> lps(pattern.length());
    int index=0;
    for(int i=1; i<=pattern.length(); )
    {
       if(pattern[i]==pattern[index])
       {
            lps[i]=index+1;
            ++i, index++;
       }
       else{
            if(index!=0)index=lps[index-1];
            else lps[i]=index, ++i;
       }
    }
    return lps;

}
void kmp(string text, string pattern)
{
    bool found=false;
    vector <int> lps = temparray(pattern);
    int i=0, j=0; /// i--> text, j-->pattern
    while(i<(int)text.length())
    {
        if(text[i]==pattern[j])
        {
            ++i, ++j;
        }
        else{
            if(j!=0)j=lps[j-1];
            else ++i;
        }
        if(j==(int)pattern.length()){
            cout << "found match at " << (i-pattern.length()) << endl;
            j=lps[j-1];
            found=true;
        }
    }
    if(!found)cout << "Not found" << endl;
}
int main ()
{
    string text, pattern;
    getline(cin, text);
    getline(cin, pattern);

    kmp(text, pattern);

    return 0;
}
