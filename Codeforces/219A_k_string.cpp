#include <bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
	int n,i,j,f=0;
	cin >> n;
	
	string s;
	vector<char> ans;
	cin >> s;
	
	map<char,int> mp;
	set<char> alp;
	
	for(i=0;i<s.size();i++)
	{
		mp[s[i]]++;	//collecting frequencies
		alp.insert(s[i]); // tracking the alphabets
	}	
	
	for(auto x: alp)	
	{
		if(mp[x]%n != 0) f++; //checking whether any alphabet is not multiple of n
	}
	
	if(f!=0) cout << -1;
	else{
		
		for(auto x: alp)
		{
			for(i=0;i<mp[x]/n;i++)
			ans.push_back(x);	//if answer = abcdabcd then ans = abcd
		}
		
		for(j=0;j<n;j++)
		{
			for(i=0;i<ans.size();i++)
			cout << ans[i];
		}
			
	}
}


