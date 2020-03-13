#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

class Task{
public:
    void solveone(istream &in, ostream &out)
    {
        //code here
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
