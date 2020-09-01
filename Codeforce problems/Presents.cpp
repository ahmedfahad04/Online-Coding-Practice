#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i,j,k,a[200],b[200],n;
	cin >> n;
	
	for(i=1;i<=n;i++)
	{
		cin >> a[i] ;
		
	}
	
	for(i=1;i<=n;i++)
	{
		b[a[i]] = i;
	}
	
	for(i=1;i<=n;i++)
	cout << b[i] << " ";
	
	
	
}
