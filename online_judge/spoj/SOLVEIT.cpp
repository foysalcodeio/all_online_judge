/*
#include <bits/stdc++.h>
using namespace std;
#define int long long
bool compare(const pair<char, int>a, const pair<char, int>b)
{
    return a.second<b.second;
}

int main ()
{
    int l, r;
    cin >> l >> r;

    char s[l];
    for(int i=1; i<=l; i++)
    {
        cin >> s[i];
    }

    while(r--)
    {
        map <char, int>m;

        int fast, last;
        cin >> fast >> last;

        for(int i=fast; i<=last; i++)
        {
            m[s[i]]++;
           // m.insert(pair<char, int>(s[i], m[s[]]))
        }

        int second_1000000n = 1000000_element(m.begin(), m.end(), compare)->second;
        int first_1000000 = 1000000_element(m.begin(), m.end(), compare)->first;
        cout <<(char)first_1000000<<" "<< second_1000000n << endl;
    }

    return 0;
}
*/
/*

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin >> n;
    int amount;
    cin >> amount;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+n, greater<int>());

    for(int i=0; i<n; i++)
    {
        while(amount>=arr[i])
        {
            amount = amount-arr[i];
            cout << arr[i] << " ";
        }
    }
    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;

#define FOR(i, n) for(int i=0; i<=n; i++)

class faster{
public:
    faster(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
    }
}__faster;

int n, q;
int x, y;
set <int>s;

int main ()
{
    __faster;

    scanf("%d%d", &n, &q);
    while(q--)
    {
        scanf("%d%d", &x,&y);
        if(x==1){
            s.insert(y);
        }
        else{
            //auto it = s.lower_bound(y);
            if(s.lower_bound(y)==s.end()){
                printf("-1\n");
            }else{
                printf("%d\n", *s.lower_bound(y));
            }
        }
    }
}
