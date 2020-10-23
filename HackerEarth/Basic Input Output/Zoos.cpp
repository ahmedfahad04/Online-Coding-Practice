#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main()
{
	string s;
	cin >> s;
	int z=0,o=0,i,j;
	
	for(i=0;i<s.size();i++)
	{
		if(s[i] == 'z') z++;
		else if(s[i] == 'o') o++;
	}
	
	if(2*z == o) cout << "Yes";
	else cout << "No";
}
