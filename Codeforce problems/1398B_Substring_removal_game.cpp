#include <bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
	ll t;
	cin  >> t;
	
	while(t--)
	{
		string s;
		cin >> s;
		int i,j,m=0,n,sum=0;
		map<char,int> mp;
		vector<int> ans;
		n = s.size();
		
		for(i=1;i<=s.size();i++)
		{
			if(s[i-1]-'0' == 1)mp[s[i-1]]++;
			
			if(s[i-1] - '0' == 0) {
				if(mp['1'] > 0){
					ans.push_back(mp['1']);
					mp.clear();
				} 
			}
			
		//	cout << mp[s[i-1]] << " ";
		}
		
	//	ans.push_back(mp['1']);
		if(mp['1']!=0) ans.push_back(mp['1']);
		
	//	cout << endl;
	//	cout << "Vector size "<<ans.size() << endl;
		
		sort(ans.rbegin(),ans.rend());
		
	//	for(auto x: ans)
	//	cout << x <<" ";
		
		for (i=1;i<=ans.size();i++)
		{
			if(i&1)sum+=ans[i-1];
		}
		
		cout << sum << endl;
	}
}


