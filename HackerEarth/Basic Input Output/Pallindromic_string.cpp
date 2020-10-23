#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main()
{
	string s;
	cin >> s;
	int i,j,f;
	j = s.size();
	for(i=0;i<(j)/2;i++){
		if(s[i] == s[j-i-1]) f = 1;
		else{
			f = 0;
			cout << "NO\n";
			break;
		}
	}
	
	if(f) cout << "YES\n";
	
}
