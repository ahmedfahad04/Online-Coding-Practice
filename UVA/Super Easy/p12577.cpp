#include <bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
	ll n,i;
	cin >> n;
	for(i=1;i<=n;i++)
	{
		ll a,b,c,j;
		cin >> a >> b >> c;
		
		if(a<=20 && b<=20 && c<=20)
		cout << "Case " << i << ": " << "good" << endl;
		
		else cout << "Case " << i << ": " << "bad" << endl;
	
	}


}


