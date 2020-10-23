#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
#define N 100010


int main()
{
	int n,t,i,j;
	cin >> n >> t;
	int a[n];
	
	for(i=0;i<n-1;i++)
	cin >> a[i];
	
	for(i=1;i<=n-1;)
	{
		i = i+a[i-1];
		//cout << i << endl;
		if(i == t)
		{
			cout << "YES";
			return 0;
		}
		
	}
	cout << "NO";
}
