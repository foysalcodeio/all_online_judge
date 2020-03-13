#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<iostream>
#include<cstring>
#include<stdlib.h>
#define R 101
#define C 101

#define TOP 0
#define CORNER 1
#define LEFT 2

#define INSERT 1
#define DELETE 1
#define SUBSTITUTE 2
int d[R][C];
bool t[R][C][3];
using namespace std;
string x,y;
int m,n;
int editDistance(){
    m = x.length();
    n = y.length();
    d[0][0] = 0;
    for(int i=1;i<=m;i++)d[i][0] = d[i-1][0] + DELETE;
    for(int i=1;i<=n;i++)d[0][i]= d[0][i-1] + INSERT;

    int cor,del,ins;

    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++){

            if(x[i-1]==y[j-1])cor  = d[i-1][j-1];
            else cor  = d[i-1][j-1]+ SUBSTITUTE;//substitution cost

            del = d[i-1][j] + DELETE;/*delete a char from the end of of prefix (0...i-1)
             so add 1 and convert it to (0...j-1) char*/

            ins = d[i][j-1] + INSERT;
            /*goes from prefix(0..i-1) to prefix (0...j-2) and insert char to the end of (0...j-2)*/
            d[i][j] = min(cor,min(del,ins));

            if(d[i][j]==cor)t[i][j][CORNER] = true;
            else t[i][j][CORNER] = false;
            if(d[i][j]==del) t[i][j][TOP] = true;
            else t[i][j][TOP] = false;
            if(d[i][j]==ins) t[i][j][LEFT] = true;
            else t[i][j][LEFT] = false;
        }
    return d[m][n];

}

void traceBack(int i, int j, string path){
    if(i==0||j==0){
        cout<<path<<endl;
        return;
    }
    if(t[i][j][LEFT])traceBack(i,j-1,"*" + path);
    if(t[i][j][TOP])traceBack(i-1,j,"-" + path);
    if(t[i][j][CORNER]){
        if(x[i-1]==y[j-1])traceBack(i-1,j-1,x[i-1]+path);
        else traceBack(i-1,j-1,"$" + path);
    }
}
void printMatrix(){
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++)
            printf("%2d ",d[i][j]);
        puts("\n");
    }
}
int main()
{

    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(getline(cin,x)){
    getline(cin,y);
    printf("Minimum Edit distance is: %d\n",editDistance());
    printMatrix();
    traceBack(m,n,"");
    }

   return 0;
}
