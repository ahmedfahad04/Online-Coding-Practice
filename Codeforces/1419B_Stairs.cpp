#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 10000007
using namespace std;


int main()
{
	ll dp[50],i,j,k=2,data[50];
	dp[0] = 1;
	data[0] = 1;

	for(i=1; i<32; i++)
	{
		dp[i] = 2*dp[i-1]+pow(2,k);
		k+=2;
		data[i] = dp[i] + data[i-1]; // our driven program.....
	}

	ll t;
	cin >> t;
	while(t--)
	{
		ll x;
		cin >> x;

		for(i=0; i<32; i++)
		{
			if(data[i]>x)
			{
				cout << i << endl;
				break;
			}

		}

	}

}


