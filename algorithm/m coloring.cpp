#include<stdio.h>
#include<string.h>
using namespace std;
#define MAX_NODE 15
#define NOCOLOR -1
int adj[MAX_NODE][MAX_NODE];
int vcolor[MAX_NODE];
int m,n;
bool promising (int index, int color){
    for (int i = 1; i < index; i++)
            if (adj[i][index] && vcolor[i] == color)
                return false;
return true;
}

//i = index of current vertex.
void m_coloring (int index){
    for (int color = 1; color <= m; color++) {
    if (promising(index,color)) {
        vcolor[index] = color;
        if (index == n)
            for(int i=1;i<=n;i++) printf("%d%c", vcolor[i], i==n?'\n':' ');
    else
        m_coloring(index+1);

        }
    }
}
int main(){
    freopen("input.txt", "r", stdin);
    while( scanf("%d", &n)==1&&n){
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++) scanf("%d", &adj[i][j]);
        scanf("%d", &m);
        memset(vcolor,-1,sizeof(int)*n);
        m_coloring(1);
    }

    return 0;
}
/* Create following graph and test whether it is 3 colorable
      (4)---(3)
       |   / |
       |  /  |
       | /   |
      (1)---(2)

    1 1 1 1
    1 1 1 0
    1 1 1 1
    1 0 1 1
*/
