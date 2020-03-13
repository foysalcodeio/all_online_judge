//https://csacademy.com/lesson/breadth_first_search
#include <bits/stdc++.h>
using namespace std;

vector<vector<int> > g(100005);

void addEdge(int x, int y){
    g[x].push_back(y);
    // g[y].push_back(x);
}
vector<int> level(100002);
vector<int> visited(100002);


void bfs(int s){
    queue<int> q;
    q.push(s);
    visited[s] = 1;
    level[s] = 0;

    while(!q.empty()){
        int f = q.front();
        q.pop();
        for(unsigned int i =0; i<g[f].size(); i++){
            if( visited[g[f][i]] == 0 ){
                level[g[f][i]] = level[f] + 1;
                q.push(g[f][i]);
                visited[g[f][i]] = 1;
            }
        }
    }
}


int main() {

    int n, m, v;
    cin >> n >> m >> v;

    int x, y;
    for (int i=0; i<m; i++)
    {
        cin >> x >> y;
        addEdge(x,y);
    }

    for(int i=0; i<=n; i++)
    {
        visited[i] = 0;
        level[i] = -1;
    }
    bfs(v);

    for(int i =1; i<=n; i++)
    {
        cout << level[i] << " ";
    }
    return 0;
}
