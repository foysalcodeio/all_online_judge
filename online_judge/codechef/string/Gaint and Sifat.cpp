#include <bits/stdc++.h>
using namespace std;

void computeArray(string pat, int m, vector<int>&lps)
{
    int len=0;
    lps[0]=0;

    for(int i=1; i<m; )
    {
        if(pat[i]==pat[len])
        {
            len++; // len=len+1
            lps[i]=len; //similar to f[k++]=len++;
            i++;
        }
        else{
            if(len!=0){
                len=lps[len-1];
            }
            else{
                lps[i]=0;
                i++;
            }
        }
    }
}
int kmp(string pat, string text)
{
    int m = pat.length();
    int n = text.length();

    int i=0, j=0, cnt=0;

    vector <int>lps(m, 0);
    computeArray(pat, pat.size(), lps);

    while(i<n)
    {
        if(pat[j]==text[i])
        {
            j++;
            i++;
        }
        if(j==m)
        {
            cnt++;
            j=lps[j-1];
        }
        //mismatch after j matches
        else if(i<n && pat[j]!=text[i])
        {
            // Do not match lps[0..lps[j-1]] characters,
			// they will match anyway
			if(j!=0)
                j=lps[j-1];
            else i++;
        }
    }
    return cnt;
}
int main ()
{
    int n;
    cin >> n;
    for(int t=1; t<=n; t++)
    {
        string text="", pat="", text1="", pat1="";
        getline(cin, text1);
        getline(cin, text1);

        cin >> pat1;

        for(int i=0; i<text1.size(); i++)
        {
            if(text1[i]==' '){
                continue;
            }
            text+=text1[i];
        }
        for(int j=0; j<pat1.size(); j++)
        {
            if(pat1[j]==' ')
                continue;
            pat+=pat1[j];
        }
        printf("Case %d: %d\n", t, kmp(pat, text));
    }
}
