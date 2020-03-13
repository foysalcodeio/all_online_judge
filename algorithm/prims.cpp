#include <string.h>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <bitset>
#include <list>
#include <stack>
#include <queue>
#include <algorithm>
#include <numeric>
#include <sstream>


using namespace std;

#define FOR( i, L, U ) for(int i=(int)L ; i<=(int)U ; i++ )
#define FORD( i, U, L ) for(int i=(int)U ; i>=(int)L ; i-- )
#define SQR(x) ((x)*(x))

#define INF INT_MAX


#define READ(filename)  freopen(filename, "r", stdin);
#define WRITE(filename)  freopen(filename, "w", stdout);

typedef long long ll;
typedef pair<int,int>ii;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<double> vd;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<vector<int> > vvi;
typedef vector<vector<int> > vvc;
typedef map<int, int> mii;
typedef map<string, int> msi;
typedef map<int, string> mis;
typedef map<string, string> mss;
typedef map<string, char> msc;

#define WHITE 0
#define GRAY 1
#define BLACK 2
#define MAX_NODES 100
vector<ii> g[MAX_NODES];
int key[MAX_NODES],pre[MAX_NODES];
bool taken[MAX_NODES];
int nodes,edges,mstw;
void initialise(int nodes){
    for(int i=0;i<nodes;i++){
        key[i] = INF;
        taken[i] = false;
        pre[i] = i;
        g[i].clear();
    }
}

void prims(int src){
    priority_queue<ii,vector<ii> , greater<ii> > pq;
    int u,v,w,i;
    key[src] = 0;
    taken[src] = true;
    for(i=0;i<g[src].size();i++){
        v = g[src][i].first;
        w = g[src][i].second;
        key[v] = w;
        pre[v] = src;
        pq.push(ii(v,w));

    }
    while(!pq.empty()){
        u = pq.top().first;
        pq.pop();
        if(!taken[u]){
            taken[u] = true;
            mstw += key[u];
            for(i=0;i<g[u].size();i++){
                v = g[u][i].first;
                w = g[u][i].second;
                if(!taken[v]&&w<key[v]){
                    pq.push(ii(v,w));
                    key[v] = w;
                    pre[v] = u;
                }
            }
        }
    }
}
int main()
{
    READ("input.txt");
    //WRITE("output.txt");
    int i,st,en,w;
    while(scanf("%d %d", &nodes, &edges)==2&&nodes){
        initialise(nodes);
        for(i=0;i<edges;i++){
            scanf("%d %d %d", &st, &en, &w);
            g[st].push_back(ii(en,w));
            g[en].push_back(ii(st,w));
        }
        mstw = 0;
        prims(0);
        printf("mstw=%d\n", mstw);
    }
	return 0;
}
