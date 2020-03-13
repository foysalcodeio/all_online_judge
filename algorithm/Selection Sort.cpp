#include <stdio.h>
#include <algorithm>
using namespace std;
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;

}
void selection_sort(int s[], int n){
    int i,j; /* counters */
    int min; /* index of minimum */
    for (i=0; i<n; i++) {
    min=i;
    for (j=i+1; j<n; j++)
    if (s[j] < s[min]) min=j;
    swap(&s[i],&s[min]);
    }
}
int main(){
    int arr[]={1,29,39,2,5,69};
    selection_sort(arr,sizeof(arr)/sizeof(int));
    for(int i=0;i<sizeof(arr)/sizeof(int);i++)
    printf("%d ", arr[i]);

return 0;
}
