#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	int n,i,ma=0;
	string s,k,ans;
	cin >> n;
	cin >> s;

	map<string,int> mp;
	set<string> data;

	//cout << k << endl;


	for(i=1; i<s.size(); i++)
	{
		k.push_back(s[i-1]);
		k.push_back(s[i]);

//		cout << k << endl;


		mp[k]++;
		data.insert(k);
		k.clear();
	}

	for(auto x: data)
	{
		if(mp[x]>ma)
		{
			ma = mp[x];
			ans = x;
		}
		//cout << x << " " << mp[x] << endl;
	}
	
	//cout << ma << endl;
	cout << ans;
	


}


