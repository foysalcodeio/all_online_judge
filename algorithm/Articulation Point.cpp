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
typedef vector<char> VC;
typedef vector<string> VS;
typedef pair<int, int> II;
typedef map<int, int> MII;
typedef map<char, int> MCI;
typedef map<string, int> MSI;
typedef map<string, char> MSC;

#define WHITE 0
#define GRAY 1
#define BLACK 2

int NODE, EDGE;
VVI G;
VI color, dfsNum, dfsLow, parent;
int nodeNum;
vector<bool> articulationVertex;
vector<II> articulationBridge;
int dfsRoot, rootChildren;

void articulationPointAndBridge(int u)
{
    dfsNum[u] = dfsLow[u] = nodeNum++;
    color[u] = GRAY;

    FOR(i, 0, G[u].SZ-1) {
        int v = G[u][i];
        if(color[v] == WHITE) {
            parent[v] = u;

            if(u == dfsRoot) rootChildren++;

            articulationPointAndBridge(v);

            if(dfsLow[v] >= dfsNum[u])  articulationVertex[u] = true;
            if(dfsLow[v] > dfsNum[u]) {
                articulationBridge.PB(II(u, v));
            }
            dfsLow[u] = min(dfsLow[u], dfsLow[v]);
        }
        else if(v != parent[u])
            dfsLow[u] = min(dfsLow[u], dfsNum[v]);
    }

    color[u] = BLACK;
}

int main()
{
    READ("input.txt");
    WRITE("output.txt");
    int i, j, k;
    int TC, tc;
    int u, v;

    while(cin >> NODE >> EDGE) {
        G = VVI(NODE+1);
        color = VI(NODE+1, WHITE);
        dfsNum = VI(NODE+1);
        dfsLow = VI(NODE+1);
        parent = VI(NODE+1, -1);
        articulationVertex = vector<bool>(NODE+1, false);

        FOR(i, 1, EDGE) {
            cin >> u >> v;
            G[u].PB(v);
            G[v].PB(u);
        }

        nodeNum = 0;

        FOR(i, 0, NODE-1) {
            if(color[i] == WHITE) {
                dfsRoot = i;
                rootChildren = 0;
                articulationPointAndBridge(i);
                articulationVertex[dfsRoot] = (rootChildren > 1);
            }
        }

        FOR(i, 1, NODE) {
            cout << dfsNum[i] << " " << dfsLow[i] << "\n";
        }

        cout << "Articulation Points:\n";
        FOR(i, 1, NODE) {
            if(articulationVertex[i] == true)
                cout << i << " ";
        }
        cout << "\n";

        cout << "Articulation Bridge:\n";
        FOR(i, 0, articulationBridge.SZ-1)
            cout << articulationBridge[i].first << " " << articulationBridge[i].second << "\n";
    }

	return 0;
}
