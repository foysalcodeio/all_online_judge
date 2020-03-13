#include <bits/stdc++.h>
using namespace std;
struct web{
    string url;
    int rel;
};
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    int T, t=1;
    cin >> T;
    while(t<=T)
    {
        web pages [100];
        int maxrel = 0;
        for(int i=0; i<10; i++){
            cin >> pages[i].url >> pages[i].rel;
            if(pages[i].rel>maxrel){
                maxrel = pages[i].rel;
            }
        }
        cout << "Case #"<<t<<":"<<endl;
        for(int i=0; i<10; i++){
            if(pages[i].rel==maxrel){
                cout << pages[i].url <<endl;
            }
        }
        t++;
    }

    return 0;
}
