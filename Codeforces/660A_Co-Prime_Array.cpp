#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000


int main()
{
	ll n,i,j,k=0;
	vector<ll> v,a;


	cin >> n;
	for(i=0; i<n; i++)
	{
		cin >> j;
		v.push_back(j);
	}

	for(i=1; i<n; i++)
	{
		if(__gcd(v[i],v[i-1]) == 1)
		{
			a.push_back(v[i-1]);
		}
		else
		{
			k++;
			a.push_back(v[i-1]);
			a.push_back(1);
		}

	}

	a.push_back(v[n-1]);
	cout << k << endl;

	for(auto x: a)
	{
		cout << x << " ";
	}
}
