///https://codeforces.com/contest/41/problem/A
#include <bits/stdc++.h>
using namespace std;

string rev(string const &s)
{
	string rev(s.rbegin(), s.rend());
	return rev;
}

string rev1(string const &str)
{
	string rev;
	for(int i=str.size()-1; i>=0; i--)
	{
		rev=rev.append(1, str[i]);
	}
	return rev;
}


void rev3(string& str)
{
	int len = str.length();
	for(int i=0; i<len/2; i++)
	{
		swap(str[i], str[len-i-1]);
	}
}
int main ()
{
	string str;
	getline(cin, str);

	string str2;
	getline(cin, str2);

	if(str==rev(str2))cout << "YES" << endl;
	else cout << "NO" << endl;

	return 0;
}
