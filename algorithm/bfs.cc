#include <vector>
#include <cstring>
#include <cstdio>
#include <queue>
#include <climits>
using namespace std;
#define pb(x) push_back(x)
#define MAXNODE 100
#define INF INT_MAX
#define ff first
#define ss second
#define sz size()
typedef pair< int, int > pii;
typedef queue <int> qi;
vector< pii > g[MAXNODE];
int d[MAXNODE];
int bfs(int n, int src){
    int i,u,v;
    qi q;
    for(i=0;i<n;i++)d[i]=INF;
    q.push(src);
    d[src]=0;
    while(!q.empty()){
        u = q.front();q.pop();
        for(i=0;i<g[u].sz;i++)
            {
                v = g[u][i].first;
                int vcost=d[u]+g[u][i].second;
                if(vcost<d[v]){
                    d[v]=vcost;
                    q.push(v);
                }
            }
    }
    return 0;
}
int main () {
	int n, e, i, u, v, w;

		scanf("%d %d",&n,&e);
		for(i = 0; i < n; i++) g[i].clear(); // forget previous info
		for(i = 0; i < e; i++) {
			scanf("%d %d %d",&u,&v,&w);
			g[u].pb(pii(v, w));
            g[v].pb(pii(u, w));//if graph is undirected
		}


	return 0;
}
