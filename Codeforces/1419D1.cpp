#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
#define N 100010


int main()
{
	ll n,i,j,k,a[N];
	vector<ll> v;
	cin >>n;

	for(i=0; i<n; i++)
	{
		cin >> j;
		v.push_back(j);
	}

	if(n == 1)
	{
		cout << 0 << endl << v[0];
	}
	else if(n == 2)
	{
		cout << 0 << endl << v[0] << " " << v[1];
	}
	else
	{
		sort(v.begin(),v.end());


		if(n&1)
		{

			cout << n/2 << endl;

			k = (n/2)-1;
			a[0] = v[n/2];
			for(i=1; i<=(n-2); i+=2)
			{
				a[i] = v[k];
				k--;
			}
			k = (n/2)+1;
			for(i=2; i<n; i+=2)
			{
				a[i] = v[k];
				k++;
			}

			for(i=0; i<n; i++)
				cout << a[i] << " ";
		}
		else
		{

			cout << n/2-1 << endl;
			k = (n/2)-1;
			a[0] = v[n/2];
			for(i=0; i<n; i+=2)
			{
				a[i] = v[k];
				k--;
			}
			k = n/2;
			for(i=1; i<n; i+=2)
			{
				a[i] = v[k];
				k++;
			}

			for(i=0; i<n; i++)
				cout << a[i] << " ";

		}
	}

}
