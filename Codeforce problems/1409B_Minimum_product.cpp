#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;


int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		ll a,b,x,y,n,i,j,p,q,c,d,r,s;
		vector<ll> v;
		cin >> a >> b >> x >> y >> n;

		c = a-x;
		d = b-y;

		if((c+d)<=n)
		{
			cout << x*y << endl;
		}
		else
		{
			if(c<=n)
			{
				if(d<=(n-c))
				{
					v.pb((a-c)*(b-d));
				}
				else
				{
					v.pb((a-c)*(b-(n-c)));
				}
			}
			else
			{
				v.pb((a-n)*b);
			}

			if(d<=n)
			{
				if(c<=(n-d))
				{
					v.pb((b-d)*(a-c));
				}
				else
				{
					v.pb((b-d)*(a-(n-d)));
				}
			}
			else
			{
				v.pb((b-n)*a);
			}

			sort(v.begin(),v.end());

			cout << v[0] << endl;

		}
	}
}


