#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	int n,a,b,i,sum=0,j;
	cin >> n >> a >> b;
	
	for(i=0;i<n;i++)
	{
		cin >> j;
		if(i>=a && i<=b) sum += j;
	}
	
	cout << sum;
	
	
	
}


