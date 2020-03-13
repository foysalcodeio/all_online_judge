//https://csacademy.com/lesson/breadth_first_search
##include <bits/stdc++.h>
#include <vector>
#include <map>
#include<queue>

using namespace std;

map<int, vector<int> > graph;
map<int, int>level;

void sorthestpath(int v)
{
    queue<int> q;
    map<int, bool>visited;

    q.push(v);
    level[v]=0;
    visited[v]=true;


    while(!q.empty())
    {
        int currentnode = q.front();
        q.pop();

        for(int x : graph[currentnode])
        {
            if(visited[x]==false)
            {
                visited[x]=true;
                q.push(x);
                level[x]=level[currentnode]+1;
            }
            else if(level[x] > level[currentnode]+1){
                level[x] = level[currentnode]+1;
            }
        }

    }
}

int main ()
{
    int n, m, v;
    cin >> n >> m >> v;

    for(int i=0; i<m; i++)
    {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
    }

    for(int i=1; i<=n; i++)
    {
        level[i]=-1;
    }
    sorthestpath(v);

    for(int i=1; i<=n; i++)
    {
        cout << level[i] << " ";
    }
    return 0;
}
