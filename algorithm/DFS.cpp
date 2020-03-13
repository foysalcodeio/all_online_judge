#include <cstdio>
#include <cmath>
#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <string>
#include <algorithm>
#include <bitset>
#include <climits>

using namespace std;

#define FOR( i, L, U ) for(int i=(int)L ; i<=(int)U ; i++ )

#define INF INT_MAX


typedef vector<int> vi;
typedef vector<vector<int> > vvi;

#define WHITE 1
#define GRAY 2
#define BLACK 3
#define MAX_NODE 51

vvi g;
int t;
vi d,f,pre,color;


int nodes, edges;

void DFS_Visit(int u)
{
    color[u] = GRAY;
    d[u] = ++t;

    FOR(i, 0, g[u].size()-1) {
        int v = g[u][i];
        if(color[v] == WHITE) {
            pre[v] = u;
            DFS_Visit(v);
        }
    }
    color[u] = BLACK;
    f[u] = ++t;
}

void DFS()
{
    color = vi(nodes+1,WHITE);
    pre = vi(nodes+1,-1);
    d = vi(nodes+1,-1);
    f = vi(nodes+1,-1);
    t =0;
    FOR(u, 1, nodes) {
        if(color[u] == WHITE)
            DFS_Visit(u);
    }
}


int main()
{
    freopen("input.txt", "r", stdin);

    int u, v;

   while(cin >> nodes >> edges){
    g = vvi(nodes+1);
    FOR(i, 1, edges) {
        cin >> u >> v;
        g[u].push_back(v);
    }
    DFS();
    cout << "Nodes\tColor\tDiscovered Time\t Finish Time\n";
    FOR(i, 1, nodes) {
        cout << i << "\t";
        cout << color[i] << "\t";
        cout << d[i] << "\t\t";
        cout << f[i] << "\n";
    }
   }
   return 0;
}
