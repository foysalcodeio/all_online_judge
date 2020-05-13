///https://codeforces.com/problemset/problem/208/A
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string str;
    cin >> str;

    size_t pos = str.find("WUB");
    while(pos != string::npos)
    {
        str.replace(pos, 3, " ");
        pos = str.find("WUB", pos+1);
    }
    cout << str << endl;
    return 0;
}
