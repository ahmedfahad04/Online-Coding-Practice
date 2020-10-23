#include <bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
	ll t;
	cin  >> t;
	
	while(t--)
	{
		ll x,y,i,j;
		cin >> x >> y;
		
		if(2*x<=y) cout << x << " "<<2*x << endl;
		else cout << -1 << " " << -1 << endl;
	}
}


