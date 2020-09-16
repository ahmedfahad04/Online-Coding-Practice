#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		ll n,m[30][30],i,j,k,ans=0;
		cin >> n;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				cin >> m[i][j];
			}
		}
		
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(m[i][j-1]>m[i][j]) ans++;
			}
		}
		
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(m[j][i]>m[j][i]) ans++;		
			}
		}
		
		cout << ans << endl;
 	}
}
