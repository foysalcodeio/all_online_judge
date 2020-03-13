#include <cstdlib>
#include <climits>
#include <cstdio>
using namespace std;
#define DUMMY 5454
int ways[1000000];

int wt[] = {DUMMY, 10, 20, 30, 10};
//This solution does not allow repetation
int knapSack(int N, int W){
    ways[0] = 1;
    for(int i = 1; i<= W; i++)ways[i] = 0;

    for(int i = 1; i<= N; i++)
        for(int j = W; j>0; j--){
            //if(wt[i]>j) ways[j] = ways[j];
            if(wt[i]<= j) ways[j] = ways[j] + ways[j - wt[i]];
        }
   return ways[W];
}
int main()
{

    int  W = 20;
    int n = sizeof(wt)/sizeof(wt[0]);
    printf("%d", knapSack(n-1, W));
    return 0;
}

/*
#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
int count( int S[], int m, int n )
{
    // table[i] will be storing the number of solutions for
    // value i. We need n+1 rows as the table is consturcted
    // in bottom up manner using the base case (n = 0)
    int table[n+1];

    // Initialize all table values as 0
    memset(table, 0, sizeof(table));

    // Base case (If given value is 0)
    table[0] = 1;

    // Pick all coins one by one and update the table[] values
    // after the index greater than or equal to the value of the
    // picked coin
    for(int i=0; i<m; i++)
        for(int j=S[i]; j<=n; j++)
            table[j] += table[j-S[i]];

    return table[n];
}
int main(){
    return 0;
}
*/
