#include <cstdio>
#include <cmath>
#include <iostream>
#include <string.h>		// For memset function
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <string>
#include <algorithm>
#include <bitset>
#include <sstream>
#include <map>

using namespace std;

#define FOR( i, L, U ) for(int i=(int)L ; i<=(int)U ; i++ )
#define FORD( i, U, L ) for(int i=(int)U ; i>=(int)L ; i-- )
#define SQR(x) ((x)*(x))

#define INF 99999999
#define SZ size()
#define PB push_back
#define PF push_front

#define READ(filename)  freopen(filename, "r", stdin);
#define WRITE(filename)  freopen(filename, "w", stdout);

typedef long long LL;
typedef vector<int> VI;
typedef vector<vector<int> > VVI;
typedef vector<double> VD;
typedef vector<string> VS;
typedef map<int, int> MII;
typedef map<string, int> MSI;
typedef map<string, char> MSC;

#define WHITE 0
#define GRAY 1
#define BLACK 2

int nodes, edges;
VVI g;
VI color, dfsNum, dfsLow;
int nodeNum;
stack<int> s;
VI inStack;

void strongConnect(int u);
void Tarjan()
{
    color = VI(nodes+1, WHITE);
    dfsNum = VI(nodes+1);
    dfsLow = VI(nodes+1);
    inStack = VI(nodes+1,  false);
    nodeNum = 0;
    FOR(u, 1, nodes) {
        if(color[u] == WHITE)
            strongConnect(u);
    }
}

void strongConnect(int u)
{
    dfsNum[u] = dfsLow[u] = nodeNum++;
    color[u] = GRAY;
    s.push(u);  inStack[u] = true;

    FOR(i, 0, g[u].SZ-1) {
        int v = g[u][i];
        if(color[v] == WHITE) {
            strongConnect(v);
            dfsLow[u] = min(dfsLow[u], dfsLow[v]);
        }
        else if(inStack[v] == true)
            dfsLow[u] = min(dfsLow[u], dfsNum[v]);
    }

    if(dfsNum[u] == dfsLow[u]) {
        int w = -1;
        while(w != u) {
            w = s.top();    s.pop();    inStack[w] = false;
            cout << w << " ";
        }
        cout << "\n";
    }
}

int main()
{
    READ("input.txt");
   // WRITE("output.txt");
    int u, v;

    while(cin >> nodes >> edges) {

        g = VVI(nodes+1);

        FOR(i, 1, edges) {
            cin >> u >> v;
            g[u].PB(v);
        }

        Tarjan();
        cout << "\n";

    }

	return 0;
}
