#include <cstdio>
#include <queue>
#include <algorithm>
#include <climits>
using namespace std;
#define MAXN 100
int r [MAXN][MAXN];
int parent[MAXN];
int cost[MAXN];
bool vis[MAXN];
int nodes,edges,s,t;
bool bfs(){
    queue<int> q;
    for(int i=0;i<nodes;i++)vis[i]=false;
    //for(i=0;i<nodes;i++)parent[i]=i;
    q.push(s);
    vis[s] = true;
    while (!q.empty()) {
    int u =q.front();q.pop();
    if (u == t)
            return true;

    for (int i = 0; i < nodes; i++)
        if (r[u][i] > 0 && !vis[i]) {
            parent[i] = u;
            cost[i] = min(cost[u], r[u][i]);
            vis[i] = true;
            q.push(i);
        }
    }
return false;
}
	int main() {
		int st,en,cst,i,j;
		while (scanf("%d %d %d %d",&nodes,&edges,&s,&t)==4) {

            for(i=0;i<nodes;i++)
                for(j=0;j<nodes;j++)
                    r[i][j]=0;

            for(i=0;i<edges;i++){
                scanf("%d %d %d",&st,&en,&cst);
				r[st][en] += cst;
				r[en][st] += cst;
			}
			cost[s] = INT_MAX;
			parent[s] = s;
			int maxflow = 0;

			while (bfs()) {
					maxflow += cost[t];
					int u = t;
					while (parent[u] != u) {
						r[parent[u]][u] -= cost[t];
						r[u][parent[u]] += cost[t];
						u = parent[u];
					}
			}
			printf("maxflow=%d\n",maxflow);
		}
	}
