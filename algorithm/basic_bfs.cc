#include <bits/stdc++.h>
#include <vector>
#include <queue>

using namespace std;

vector <int> adj[100];
int visited[100];

void bfs(int s, int n) // s = node and n = number of vertex
{
    for(int i=0; i<n; i++)visited[i]=0;

    queue<int>q;
    q.push(s);
    visited[s]=1;

    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        for(int i=0; i<adj[i].size(); i++)
        {
            if(visited[adj[u][i]]==0)
            {
                int v = adj[u][i];
                visited[v]=1;
                q.push(v);
            }
        }
    }
}
int main ()
{

}
