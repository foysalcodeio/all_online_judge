#include <stdio.h>
#include <algorithm>
#include <cmath>
using namespace std;
#define MAX 10005
int arr[] = {1, 4, 5, 7, 10};
int key, mid, shouldBeIndex;
int binarySearch(int lo, int hi){
    if(lo>hi){
        shouldBeIndex = ceil(double(lo+hi)/2);
        return -1;
    }
    mid = lo + (hi-lo)/2;
    if(key==arr[mid])return mid;
    else if(key<arr[mid])return binarySearch(lo, mid-1);
    else return binarySearch(mid+1,hi);
}
int main(){
     key = 15;
     int index = binarySearch(0,sizeof(arr)/sizeof(int)-1);
     if(index==-1)printf("Key not found but should be at %d position\n",shouldBeIndex);
     else printf("Key found at %d position\n", index);
    return 0;
}
