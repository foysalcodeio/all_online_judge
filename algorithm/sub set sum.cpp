#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <numeric>
using namespace std;
#define MAX_ELEMENT 15+1
int wt[MAX_ELEMENT];
bool include[MAX_ELEMENT];
int n,W,weight,total;
bool promising (int i, int weight, int total){
        return ((weight + total >= W) &&(weight == W || weight + wt[i+1] <= W));
}
//i = index of current item. i.e depth of tree
//weight = summed weight of items included so far.
//total = total weight of notyetconsidered items.
void sum_of_subsets (int i, int weight, int total){
    if (promising(i, weight, total)) {
        if (weight == W) {
                for(int k = 1;k<=i;k++)if(include[k])printf("%d%c", wt[k],k==i?'\n':' ');
        } else {
        include[i+1] = true;
        sum_of_subsets(i+1, weight + wt[i+1], total- wt[i+1]);
            include[i+1] = false;
        sum_of_subsets(i+1, weight, total-wt[i+1]);
        }
    }
}
int main()
{
    freopen("input.txt", "r", stdin);
    while(scanf("%d", &n)==1&& n!=0){
        for(int i=1;i<=n;i++)scanf("%d", &wt[i]);
        scanf("%d", &W);
        sort(&wt[1],&wt[1]+n);
        total = accumulate(&wt[1],&wt[1]+n,0);
        weight = 0;
        sum_of_subsets(0,weight,total);
    }
    return 0;
}
