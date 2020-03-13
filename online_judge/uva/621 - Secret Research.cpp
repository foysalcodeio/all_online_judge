#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int n;
    cin >> n;
    while(n--)
    {
        string S;
        cin >> S;
        int len = S.size();

        if(S=="1" || S=="4" || S=="78"){
            cout << "+" << endl;
        }
        else if(S[len-1]=='5' && S[len-2]=='3'){
            cout << "-" << endl;
        }
        else if(S[0]=='1' && S[1]=='9' && S[2]=='0'){
            cout << "?" << endl;
        }
        else{
            cout << "*" << endl;
        }
    }
    return 0;
}
/*

#include <cstdio>
#include <cstring>
using namespace std;

int main() {
	int tc;
	char s[2000];

	scanf("%d", &tc);
	while (tc--) {
		scanf("%s", s);

		int len = strlen(s);

		if (strcmp(s, "1") == 0 || strcmp(s, "4") == 0 || strcmp(s, "78") == 0)
			printf("+\n");
		else if (s[len - 1] == '5' && s[len - 2] == '3')
			printf("-\n");
		else if (s[0] == '9' && s[len - 1] == '4')
			printf("*\n");
		else if (s[0] == '1' && s[1] == '9' && s[2] == '0')
			printf("?\n");
		else
			printf("+\n");
	}

	return 0;
}*/
