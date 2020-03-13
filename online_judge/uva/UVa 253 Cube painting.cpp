#include <bits/stdc++.h>
using namespace std;
char s[14];
bool eq()
{
    for(int i=0; i<6; i++)
    {
        if(s[i]!=s[i+6])return false;
    }
    return true;
}
void rotatey()
{
    char temp = s[1];
    s[1]=s[3];
    s[3]=s[4];
    s[4]=s[2];
    s[2]=temp;
}
void rotatex()
{
    char temp=s[0];
    s[0]=s[1];
    s[1]=s[5];
    s[5]=s[4];
    s[4]=temp;
}
int main ()
{
    while((scanf("%s", s))!=EOF)
    {
        bool same;
        for(int i=0; i<6; i++)
        {
            same=eq();
            if(same)break;
            else if(i<4)rotatex();
            else if(i==4)
            {
                rotatey();
                rotatex();
            }
            else{
                rotatex();
                rotatex();
            }
            for(int j=0; j<4; j++){
                same=eq();

                if(same)break;
                else rotatey();
            }
            if(same)break;
        }
        if(same)cout << "TRUE\n";
        else cout << "FALSE\n";
    }
    return 0;
}
