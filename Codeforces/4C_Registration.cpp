#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 10000007
using namespace std;


int main()
{
	ll n,i,j;
	string s;
	map<string,int> mp;
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> s;
		if(mp[s] == 0) cout << "OK\n", mp[s]++;
		else cout << s << mp[s] << endl, mp[s]++;
	}
}


