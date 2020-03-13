//https://www.youtube.com/watch?v=iWTEjkGqL6M
//copy from : loveExtendsCode
#include <bits/stdc++.h>
#include <stdio.h>
#include <iostream>
#include <queue>

using namespace std;

#define ll long long int
#define REP(i,n) for(ll i=0; i<n; i++)
#define ff first
#define ss second
#define mp make_pair
#define pb push_back

#define WHITE 1
#define GRAY 2
#define BLACK 3

int adj[100][100];
int color[100];
int parent[100];
int dis[100];

int node, edge;

void bfs(int startingnode)
{
    for(int i=0; i<node; i++)
    {
        color[i]=WHITE;
        dis[i]=INT_MIN;
        parent[i]=-1; //no parent;
    }

    dis[startingnode]=0;
    parent[startingnode]=-1;

    queue <int> q;
    q.push(startingnode);

    while(!q.empty())
    {
        int x = q.front();
        q.pop();
        //looking negibour
        color[x]=GRAY; //visiting..

        printf("%d ", x);

        for(int i=0; i<node; i++)
        {
            if(adj[x][i]==1)
            {
                if(color[i]==WHITE)
                {
                    //x neighbour i
                    //x number node hocce i no node
                    dis[i]=dis[x]+1;
                    parent[i]=x;
                    q.push(i);
                }
            }
        }
        color[x]=BLACK;

    }
}

int main ()
{
    freopen("input.txt", "r", stdin);

    scanf("%d%d", &node, &edge);

    int n1, n2;
    for(int i=0; i<edge; i++)
    {
        scanf("%d%d", &n1, &n2);
        adj[n1][n2]=1;
        adj[n2][n1]=1;
    }

    bfs(0);
    //printf("\n%d", &parent[5]) 5 number node parent k
   // printf("\n%d", dis[6]);

    return 0;
}
