#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 10000007
using namespace std;


int main()
{
	
	int t;
	cin >> t;
	
	while(t--)
	{
		int n,i,x;
		cin >> n;
		
		x = 4*n;
		
		for(i=0;i<n;i++)
		{
			cout << x << " ";
			x-=2;
		}
		cout << endl;
	}
	
}


