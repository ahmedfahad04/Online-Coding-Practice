#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long 
#define N 1000


int main()
{
	int n,i,j;
	long int k=0;
	map<char, long int> mp;
	map<char, long int> :: iterator it=mp.begin();
	
	cin >> n;
	
	string s;
	cin >> s;

	
	for(i=0;i<n;i++)
	{
		if(s[i] == '1')mp[s[i]]++;
		if(s[i] == '1' && s[i+1] == '0' && i+1 != n)
		{
			cout << mp['1'];
			mp.clear();
		}
		else if(s[i] == '0' && s[i+1] == '1' && i+1 != n) continue;
		else if(s[i] == '0' && s[i+1] == '0' && i+1 != n)
		{
			cout << 0;
		}
		
	}
	if(mp.size()>0) cout << mp['1'];
	if(s[n-1] == '0') cout << 0;
}	
