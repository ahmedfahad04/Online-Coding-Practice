#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while(t--)	
	{
		int n,i,j,k;
		map<char,int> mp;
		string s;
		
		cin >> n;
		cin >> s;
		
		for(i=0;i<s.size();i++)
		{
			mp[s[i]]++;
		}
		
		if(mp.size() == 1) 
		{
			for(i=0;i<n;i++)
			cout << s[i];
			
			cout << endl;
		}
		
		else
		{
			for(i=0;i<n;i++)
			cout << s[n-1];
			
			cout << endl;
		}
		
	}
}
