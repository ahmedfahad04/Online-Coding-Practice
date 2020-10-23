#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main()
{
	ll t;
	cin >> t;

	while(t--)
	{
		int n,ans=0,i;
		string s;
		
		cin >> n;
		cin >> s;
		
		for(i=1;i<n;i++)
		{
			if((s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ) && 
			(s[i-1]!='a' && s[i-1]!='e' && s[i-1]!='i' && s[i-1]!='o' && s[i-1]!='u' ) )ans++;
		}
		
		cout << ans << endl;
	}
}
