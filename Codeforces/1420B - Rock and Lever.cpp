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
		ll n,i,j,cn=0,ans=0;
		cin >> n;
		vector<ll> data;
		for(i=0; i<n; i++)
		{
			cin >> j;
			data.pb(j);
		}
		sort(data.begin(),data.end());

		for(i=0; i<=log2(data[n-1]); i++)
		{
			cn = 0;
			for(j=0; j<n; j++)
			{
				if(data[j] >= pow(2,i) and data[j] < pow(2,(i+1)) and data[j] != 0)
				{
					data[j] = 0;
					cn++;
				}
			}

			ans += (cn*(cn-1))/2;
		
		}
		cout  <<ans << endl;
	}
}
