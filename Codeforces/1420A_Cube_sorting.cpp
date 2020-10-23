#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		ll n,i,j,k=0;
		vector<ll> v,c;
		set<ll> s;
		cin >> n;
		
		for(i=0;i<n;i++)
		{
			cin >>j;
			v.push_back(j);
			c.push_back(j);
			
			if(s.count(j)) k++;
			
			s.insert(j);
			
			
		}
		sort(c.rbegin(),c.rend());
		
	//	cout << "VAL: " << k << endl;
		if(v == c && k == 0) cout << "NO\n";
		else cout << "YES\n";
		
		
		
	}
}
