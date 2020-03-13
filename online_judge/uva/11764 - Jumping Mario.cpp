#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int arr[50], T, N;
    cin >> T;
    for(int i=0; i<T; i++)
    {
        cin >> N;
        int ups = 0, downs = 0;
        for(int ii=1; ii<=N; ii++){
            cin >> arr[ii];
        }
        for(int j=1; j<N; j++){
            if(arr[j]<arr[j+1])
                ups++;
            if(arr[j]>arr[j+1])
                downs++;
            if(arr[j]==arr[j+1])
                continue;
        }
        cout << "Case "<<i+1<<": "<<ups<< " " <<downs<<endl;
    }
    return 0;
}
