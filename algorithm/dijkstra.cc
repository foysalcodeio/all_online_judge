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
class cmp {
public:
     int operator() ( const pair<int, int>& p1,
                      const pair<int, int>& p2 ) {
         return p1.second > p2.second;
     }
};
int dijkstra(int n, int src){
    int i,u,v;
    priority_queue<pii,vector<pair<int,int> >,cmp > q;
    for(i=0;i<n;i++)d[i]=INF;
    q.push(pii(src,0));
    d[src]=0;
    while(!q.empty()){
        u = q.top().ff;q.pop();
        for(i=0;i<g[u].sz;i++)
            {
                v = g[u][i].first;
                int vcost=d[u]+g[u][i].second;
                if(vcost<d[v]){
                    d[v]=vcost;
                    q.push(pii(v,d[v]));
                }
            }
    }
    return 0;
}
int main () {
	int n, e, i, u, v, w,src;

		scanf("%d %d",&n,&e);
		for(i = 0; i < n; i++) g[i].clear(); // forget previous info
		for(i = 0; i < e; i++) {
			scanf("%d %d %d",&u,&v,&w);
			u--;v--;
			g[u].pb(pii(v, w));
            g[v].pb(pii(u, w));//if graph is undirected
		}
 
    dijkstra(n,src);
	return 0;
}
