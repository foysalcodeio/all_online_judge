#include <bits/stdc++.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
#define MAXQUEEN 9
int column[MAXQUEEN];
int i,row,n,total;
bool promising(int r, int c){
    for(i=1;i<r;i++)
        if(r==i||c==column[i]||abs(r-i)==abs(c-column[i]))return false;

    return true;
}
void nQueens(int row){
    for(int col=1;col<=n;col++){
        if(promising(row,col)){
            column[row] = col;
            if(row==n){
                total++;
                for(i = 1;i<=n;i++) printf("(%d,%d)%c",i,column[i],i==n?'\n':' ');
                }
            else nQueens(row+1);
        }
    }
}
int main(){
    while(scanf("%d", &n)==1 && n!=0){
        total = 0;
        nQueens(1);
        printf("Total=%d\n",total);
    }
    return 0;
}
