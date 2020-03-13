/*============
Autor : md. Foysal ahammed
University : Eastern University of Bangladesh
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int cnt = 1;
    char s[20];
    while(true)
    {
        cin >> s;
        if(strcmp(s, "#")==0) return 0;
        cout << "Case "<<cnt++<<": ";
        if(strcmp(s, "HELLO")==0)
            cout <<"ENGLISH"<<endl;
        else if(strcmp(s, "HOLA")==0)
            cout <<"SPANISH"<<endl;
        else if(strcmp(s, "HALLO")==0)
            cout <<"GERMAN"<<endl;
        else if(strcmp(s, "BONJOUR")==0)
            cout <<"FRENCH"<<endl;
        else if(strcmp(s, "CIAO")==0)
            cout <<"ITALIAN"<<endl;
        else if(strcmp(s, "ZDRAVSTVUJTE")==0)
            cout<<"RUSSIAN"<<endl;
        else cout <<"UNKNOWN"<<endl;
    }
	return 0;
}
