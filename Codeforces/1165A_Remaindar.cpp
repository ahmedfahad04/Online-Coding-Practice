#include <bits/stdc++.h>
#define ll long long int
using namespace std;

//ll exp(ll a, ll b)
//{
//	ll result = 1;
//	while(b!=0)
//	{
//		if(b&1)
//		{
//			result *= a;
//		}
//		a = a*a;
//		b >>= 1;
//	}
//	return result;
//}

int main()
{
	ll n,x,y,i,j,k,ans=0;
	vector<char> v,w,div,mod;
	string c;

	cin >> n >> x >> y;
	k = x-y-1;
	cin >> c;

	for(i=0; i<n; i++)
	{
		v.push_back(c[i]);
	}

	for(i=0; i<x; i++)
	{
		w.push_back(v[n-x+i]);
	}


	for(i=0; i<x; i++)
	{

		if(k == i) div.push_back('1');
		else div.push_back('0');

	}

	for(i=0; i<x; i++)
	{
		if(div[i] != w[i]) ans++;
	}

	cout << ans ;




}


