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
		int n,i,j,cnt=0,f=1;
		vector<ll> l,r,zero,path;

		cin >> n;
		for(i=0; i<n; i++)
		{
			cin >> j;
			path.pb(j);
			zero.pb(j);
		}
		zero.assign(n,-1);
		zero[0] = 0;

		// Core process..................
		for(i=0; i<n; i++)
		{
			if(cnt == n-1) break;


			for(j=0; j<n; j++)
			{
				if(zero[i] == 0)
				{
					if(path[i] != path[j] && zero[j] != 0)
					{
						cnt++;
						l.pb(i+1);
						r.pb(j+1);
						zero[j] = 0;
					}
				}

				if(cnt == n-1) break;
			}

		
		}


		//Output window...............
		if(cnt == 0 || cnt != n-1) cout << "NO\n" ;
		else
		{
			cout << "YES\n";
			for(i=0; i<n-1; i++)cout << l[i] << " " << r[i] << endl;
		}


	}

}
