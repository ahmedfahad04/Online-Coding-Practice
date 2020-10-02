#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
#define pb push_back
#define N 100010

int coin[] = {1,2,5};
int dp[1000] = {0};

int min_count(int n,int n_coin)
{
	int i,j,k;
	for(i=0; i<=n; i++)
		dp[i] = INT_MIN;

	dp[0] = 0;

	for(i=1; i<=n; i++)
	{
		for(j=0; j<n_coin; j++)
		{
			if(coin[j]<=i)
			{
				dp[i] = max(dp[i], 1 + dp[i-coin[j]]);

			}
		}
	}

	return dp[n];
}
int main()
{

	cout << "Result: " << min_count(11,3) ;
}
