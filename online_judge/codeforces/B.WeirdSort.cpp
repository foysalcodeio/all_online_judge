
///problem link : https://codeforces.com/contest/1311/problem/B

#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

class Task{
public:
    void solveone(istream &in, ostream &out)
    {
        int n, m;
        in >> n >> m;
        int a[n];
        set<int>s;
        for(int i=0; i<n; i++)in >> a[i];

        while(m--){
            int p;
            in>>p;
            s.insert(p-1);
        }

        int flag=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n-i-1; j++){
                if(a[j]>a[j+1]){
                    if(s.find(j)!=s.end()){
                        swap(a[j], a[j+1]);
                }
                else{
                    flag=1;
                    break;
                }
            }
        }
    }
    if(flag==1)out <<"NO\n";
    else out << "YES\n";
    }
    void solve(istream &in, ostream &out)
    {
        int t;
        in >> t;
        for(int i=0; i<t; i++)
        {
            solveone(in, out);
        }
    }
};

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Task solver;
    istream& in(cin);
    ostream& out(cout);

    solver.solve(in, out);

    return 0;
}




