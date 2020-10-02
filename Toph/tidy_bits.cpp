#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ll n,k,r=1;
	cin >> n;
	
	k = __builtin_popcount(n);
	
	
	while(1)
	{
		r = r<<1;
		k--;
		if(k == 0)
		{
			r--;
			break;
		}
		
	}

	cout << r << endl;
}


