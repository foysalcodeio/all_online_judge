//https://csacademy.com/lesson/breadth_first_search
#include <bits/stdc++.h>
using namespace std;

const int mx = 10005;

int main ()
{
    int cost, edge, node;
    cin >> cost >> edge >> node;

    int viscount=0;
    vector<int>graph[mx];

    queue<int>bfsqueue;
    vector<bool> visited(cost+1);
    visited[node]=true;
    bfsqueue.push(node);

    vector<int>res(cost+1);
    res[node]=0;

    for(int i=1; i<=edge; i++)
    {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
    }

    while(!bfsqueue.empty())
    {
        int currentnode = bfsqueue.front();
        bfsqueue.pop();

        for(auto neighbour : graph[currentnode])
        {
            if(!visited[neighbour]){
                visited[neighbour]=true;;
                bfsqueue.push(neighbour);
                res[neighbour]=res[currentnode]+1;
            }
        }
        viscount++;
    }
    for(int i=1; i<=cost; i++)
    {
        if(visited[i]==false){
            cout << -1 << endl;
        }
        else cout << res[i] << endl;
    }
    return 0;
}
