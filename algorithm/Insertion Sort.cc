#include <stdio.h>
#include <algorithm>
using namespace std;
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;

}
void insertion_sort(int s[], int n){
    int i,j;
    for (i=1; i<n; i++) {
    j=i;
    while ((j>0) && (s[j] < s[j-1])) {
        swap(&s[j],&s[j-1]);
    j = j-1;
    }
    }
}
int main(){
    int arr[]={1,29,39,2,5,69};
    insertion_sort(arr,sizeof(arr)/sizeof(int));
    for(int i=0;i<sizeof(arr)/sizeof(int);i++)
    printf("%d ", arr[i]);

return 0;
}
