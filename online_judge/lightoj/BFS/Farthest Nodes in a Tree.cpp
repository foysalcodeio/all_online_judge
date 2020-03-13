 ///1094 - Farthest Nodes in a Tree
 #include <bits/stdc++.h>
 using namespace std;
 #define IOS ios_base::sync_with_stdio(0);cin.tie(0);
 #define ll long long int
 #define ull unsigned ll
 #define mod 1e9+7

 int node[30005];
 bool vis[30005];

 vector <int>adj[30005], cost[30005];

 void reset(int n)
 {
     for(int i=0; i<=n; i++){
         node[i]=0;
         vis[i]=0;
         adj[i].clear();
         cost[i].clear();
     }
 }

 int bfs(int src)
 {
     node[src]=0;

     queue<int>q;
     q.push(src);

     ll res=0;
     int large=src;
     vis[src]=1;
     while(!q.empty())
     {
         src=q.front();
         q.pop();

         for(int i=0; i<adj[src].size(); i++)
         {
             int child=adj[src][i];
             if(!vis[child])
             {
                 node[child]=node[src]+cost[src][i];
                 vis[child]=1;
                 q.push(child);

                 if(node[child]>res)
                 {
                     large=child;
                     res=node[child];
                 }

             }
         }
     }
     return large;

 }
 int main ()
 {
     int t, cnt=0;
     cin >> t;
     while(t--)
     {
         int nodes;
         scanf("%d", &nodes);
         reset(nodes);

         int x, y, weight;
         for(int i=1; i<nodes; i++){
             scanf("%d%d%d", &x, &y, &weight);
             adj[x].push_back(y);
             adj[y].push_back(x);

             cost[x].push_back(weight);
             cost[y].push_back(weight);
         }

         int sr = bfs(0);
         for(int i=0; i<=nodes; i++){
             node[i]=0;
             vis[i]=0;
         }
         sr=bfs(sr);
         printf("Case %d: %d\n", ++cnt, node[sr]);
     }
     return 0;
 }
