#include <bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		ll n,i,k,sum=0,j;
		vector<ll> v;
		cin >> n;

		
		if(n<50)
		{
			for(i=1; i<=sqrt(n); i++)
			{
				if(n%i == 0)
				{
					k = n/i;
					v.push_back(k+(i-2));
				}
				else
				{
					k = (n/i)+1;
					v.push_back(k+(i-2));
				}
			}
		}
		else
		{
			j = sqrt(n);
			for(i=j-5; i<=j+5; i++)
			{
				if(n%i == 0)
				{
					k = n/i;
					v.push_back(k+(i-2));
				}
				else
				{
					k = (n/i)+1;
					v.push_back(k+(i-2));
				}
			}
		}


		sort(v.begin(),v.end());

		cout << v[0] << endl;

	}
}


