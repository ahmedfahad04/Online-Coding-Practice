#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	cout.tie(0);
	ll t;
	cin >> t;
	
	while(t--)
	{
		ll x,y,cnt=0,i;
		cin >> x;
		
		for(i=1;pow(5,i)<=x;i++)
		{
			cnt += x/pow(5,i);
		}
		
		cout << cnt << endl;
	}
}
