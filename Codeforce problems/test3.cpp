#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
#define pb push_back
#define N 100010

int main()
{
	ll t;
	cin >> t;
	
	while(t--)
	{
		int n,k,i,j,c,sum=0,v[1010];
		set<int> s;
		
		cin >> n >> k;
		
		for(i=0;i<n;i++)
		{
			cin >> v[i];
			
		}
		
		for(i=0;i<n;i++)		
		{
			for(j=i+1;j<n;j++)
			{
				c = k-v[j];
				sum +=( c/v[i] );
				cout << sum << endl;
			}
		}
		
		cout << sum << endl;
		
	}
}	
