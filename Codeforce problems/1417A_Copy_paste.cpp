#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		long int n,k,sum=0,i,j,m=1e7;
		vector<long int > v;
		cin >> n >> k;
		
		for(i=0;i<n;i++)		
		{
			cin >> j;
			v.push_back(j);
		}
		
		sort(v.rbegin(),v.rend());
		
		for(i=0;i<n-1;i++)
		{
			sum += (k - v[i])/v[n-1];
		}
		
		cout << sum << endl;
	}
}
