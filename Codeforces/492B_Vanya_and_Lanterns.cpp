#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
#define N 100010


int main()
{
	// 0 3 5 4 7 9 14 15
	ll n,i,j,ma=0,l,mi=1e9+7,o,e;
	double k;
	vector<ll> v;
	cin>> n >> l;

	for(i=0; i<n; i++) cin >> j, v.push_back(j);


	sort(v.begin(),v.end());

	o = v[0]-0;

	for(i=1; i<n; i++)
	{
		j = v[i]-v[i-1];
		ma = max(ma,j);
		mi = min(mi,j);
	}

	e = l - v[n-1];

	if(o != 0|| e !=0)
	{
		j = max(o,e);
		if(2*j<=ma)
		{
			printf("%llf",  ma/2.0);
		}
		else printf("%llf",(double)j);
	}
	else
	{
		if(ma>=mi )
		{
			printf("%llf", ma/2.0);
		}
		else printf("%llf", (double)mi);
	}


}

/* stuff you should look for before submission:
        * int overflow, array bounds
        * special cases (n=0,1?)
        * open, ending chekcing
        * check for equal values
        
*/
