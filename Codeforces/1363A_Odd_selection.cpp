// Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		int n,x,i,ev=0,od=0,j;
		cin >>n >> x;
		
		for(i=0;i<n;i++)
		{
			cin >> j;
			if(j&1) od++;
			else ev++;
		}
		
		if(n == x && od&1) cout << "Yes\n";
		else if(x<n && (od != 0 && ev != 0)) cout << "Yes\n";
		else if(x<n && (ev == 0 && x&1)) cout << "Yes\n";
		else cout << "No\n";
		
	}
}

