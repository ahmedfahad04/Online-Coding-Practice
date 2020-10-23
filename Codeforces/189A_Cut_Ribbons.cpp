#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long

int main()
{
	int n,coin[3],i,j;
	cin >> n;
	
	for(i=0;i<3;i++)
	cin>> coin[i];
	
	
	int dp[n];
	
	
	for(i=0;i<=n;i++)
	dp[i] = INT_MIN;
	
	
	dp[0] = 0;
	
	for(i=1; i<=n; i++)
	{
		for(j=0; j<3; j++)
		{
			if(coin[j]<=i)
			{
				dp[i] = max(dp[i], 1 + dp[i-coin[j]]);

			}
		}
	}
	
	cout << dp[n];
	
	
}
