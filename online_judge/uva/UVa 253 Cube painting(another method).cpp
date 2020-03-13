#include <bits/stdc++.h>
using namespace std;
string rotatex(string s1)
{
    string ret=s1;
    ret[1]=s1[2];
    ret[2]=s1[4];
    ret[3]=s1[1];
    ret[4]=s1[3];

    return ret;
}
string rotatey(string s1)
{
    string ret = s1;
    ret[0]=s1[4];
    ret[1]=s1[0];
    ret[5]=s1[1];
    ret[4]=s1[5];

    return ret;
}
string solve(string s1, string s2, int it=0)
{
    if(s1==s2)return "TRUE";
    if(it>4)return "FALSE";

    if(solve(rotatex(s1), s2, it+1)=="TRUE") return "TRUE";
    if(solve(rotatey(s1), s2, it+1)=="TRUE") return "TRUE";

    return "FALSE";
}
int main ()
{
 string s;
 while(cin >> s)
 {
     cout << solve(s.substr(0, 6), s.substr(6)) << endl;
 }
 return 0;
}
