#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 10000007
using namespace std;


int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		ll n,i,even=0,odd=0,x,f=1,y;
		set<int> s;
		vector<int> v;
		cin >> n;
		
		for(i=0;i<n;i++)
		{
			cin >> x;
			s.insert(x);
			v.pb(x);
			if(x&1) odd++;
			else even++;
		}
		
		if(even%2 == 0 && odd%2 == 0) cout << "YES\n";
		else{
			for(i=0;i<s.size();i++)
			{
				x = v[i]-1;
				y = v[i]+ 1; 
				if(s.count(x) || s.count(y))  {
					cout << "YES\n";
					f=0;
					break;
				}
			}
			if(f) cout << "NO\n";
		}		
	}
}


