/*
Floyd Warshall
complexcity O(n^3)
*/
#include <climits>
#include <iostream>
#include <cstdio>
using namespace std;
#define MAXN 100
#define INF INT_MAX
#define NINF INT_MIN
int d[MAXN][MAXN]; // d[i][j] = distance from i node to j node
int floyd(int n){
    for(int k=0; k<n; k++)
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
                //d[i][j]=min(d[i][j],max(d[i][k],d[k][j]));
                //d[i][j]=max(d[i][j],min(d[i][k],d[k][j]));
    return 0;
}
int main(){
    int n,e,i,j,u,v,w; // n=number of nodes,e=number of edges
    scanf("%d %d",&n,&e);
    for(i=0;i<n;i++) //node number begins from 0 to n-1
        for(j=0;j<n;j++)
            d[i][j]=INF;//incase of Maxmin d[i][j]=NINF
for(i=0;i<e;i++){
	scanf("%d %d %d",&u,&v,&w);
	d[u][v]=d[v][u]=w; //if graph is bidirectional
}
floyd(n);
return 0;
}
