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
		ll x,m,n,i,j,k;
		cin >> x >> m >> n;
		n = n * 10;

		if(x<=n) cout << "YES\n";
		else
		{
			for(i=0; i<m; i++)
			{
				x = (x/2) + 10;
			}

			if(x<=n) cout << "YES\n";
			else cout << "NO\n";
		}


	}
}


