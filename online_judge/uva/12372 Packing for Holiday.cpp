/*
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(true);
    cin.tie(NULL);
}
*//*
#include<bits/stdc++.h>
using namespace std;
#define int long long
void io()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);cin.tie(0);
}
int32_t main()
{
	io();
	string s;
	cin>>s;
	bool flag = true;
	int prev = 0;//0-v,1-c,2-n;
	for(auto &i:s)
	{
		int curr = (i=='a'||i=='e'||i=='i'||i=='o'||i=='u')?0:((i=='n')?2:1);
		if((curr==1||curr==2)&&(prev==1))
		{
			flag = false;
		}
		prev = curr;
	}
	flag&=(prev!=1);
	if(flag) cout<<"YES";
	else cout<<"NO";
}*/
/*------------------------
Name        : Md. Foysal Ahammed
Id          : foysal_36;
University  : only pass s.s.c
----------------------------*/
/*#################################
------No university------------
problem-Encryption, 1024

####################################
*/
/*
#include <bits/stdc++.h>
using namespace std;
int main ()
{
     char str[1000], str1[1000];
     int T;
     cin>>T;
     getchar();
     while(T--)
     {
          gets(str);
          int k = strlen(str);
          for(int i=0; i<k; i++){
               if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
                    str[i] = str[i] + 3;
          }
          int n=0;
          for(int j=k-1; j>=0; j--){
               str1[n]=str[j];
               n++;
          }
          str1[n]= '\0';

          int l=k/2;
          for(int i=l; i<k; i++){
               str1[i]=str1[i] - 1;
          }
          cout<<str1<<endl;
     }
     return 0;
}
*/
/*
#include <bits/stdc++.h>
using namespace std;
int main ()
{
     pair <string, pair<int, int> > a;
     return 0;
}
*/
/*
#include <iostream>
using namespace std;
int GCD (int F1, int F2)
{
     int gcd;
     for(int i=1; i<=F1 && i<=F2; i++){
          if(F1%i==0 && F2%i==0){
               gcd = i;
          }
     }
     return gcd;
}
int main ()
{
     int N, F1, F2, result;
     cin>>N;
     while(N--)
     {
          cin>>F1>>F2;
          cout<<GCD(F1, F2)<<endl;
     }
     return 0;
}
*/
/*
#include <bits/stdc++.h>
using namespace std;
int main ()
{
     int M, N, tmp, tmp2;
     while(scanf("%d%d",&M,&N)!=EOF)
     {
          tmp=1;
          tmp2=1;
          for(int i=1; i<=M; i++){
               tmp=tmp*i;
          }
          for(int i=1; i<=N; i++){
               tmp2=tmp2*i;
          }
          cout<<tmp+tmp2<<endl;
     }
     return 0;
}
*/
/*
#include <bits/stdc++.h>
using namespace std;

int ans[100001];
void get()
{
     for(int i=1; i<=10000; i++){
          for(int j=i+i; j<=10000; j=j+i){
               ans[j]=ans[j]+i;
          }
     }
}
int main ()
{
     get();
     int n, x;
     cin>>n;
     while(n--){
          cin>>x;
          cout<<ans[x]<<endl;
     }
     return 0;
}
*/
/*

    #include <bits/stdc++.h>
    using namespace std;

    void show(stack <int> st)
    {
        stack<int>s2;
        while(!st.empty())
        {
            s2.push(st.top());
            st.pop();
        }
        while(!s2.empty())
        {
            cout<<s2.top()<<endl;
            s2.pop();
        }
    }
    int main ()
    {
        stack<int>st;
        for(int i=1; i<=10; i++)
            st.push(i);
        //cout<<st.size()<<endl;
        //cout<<st.empty()<<endl;
       // cout<<st.top()<<endl;
        //st.pop();
       // cout<<st.top()<<endl;
       show(st);
    }
*/
/*
#include<bits/stdc++.h>
using namespace std;
bool arepair(char opening, char closing)
{

}
bool Are_p_Balanced(string exp)
{
    stack<char>s;
    for(int i=0; i<exp.length(); i++){
        if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
            s.push(exp[i]);

        else if(exp[i]==')' || exp[i]=='}' ||exp[i]==']')
        {

        }
    }
}
int main ()
{
    string expression;
    cout<<"Enter and expression"<<endl;
    cin>>expression;

    if(Are_p_Balanced())
        cout<<"Balanced"<<endl;
    else
        cout<<"Unbalanced"<<endl;
    return 0;
}
*/
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*vector <int> s1;
    vector <int> s2;
    int x1;
    cin>>n>>m;
    for(int i=0; i<n; i++){
         cin>>x1;
         s.push_back(x1);
    }
*/
/*==============================================*\
ID:        foysalahammedforhad

Name:     Md. Foysal Ahammed
Study:    no education in univeristy
Address:  Dhaka, Bangladesh

 mail: md.foysalahammedforhad@gmail.com
 FB  : www.facebook.com/mdfoysalahammed.forhad
\*===============================================*/

#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update
#include <bits/stdc++.h>
using namespace __gnu_pbds;
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T, cnt=1;
    cin >> T;
    while(T--)
    {
        int L, W, H;
        cin >> L >> W >> H;
        cout << "Case "<<cnt++<<": ";
        if(L<=20 && W<=20 && H<=20){
            cout << "good\n";
        }else{
            cout << "bad\n";
        }
    }
    return 0;
}
