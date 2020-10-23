#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{

	int t;
	cin >> t;
	while(t--)
	{
		int n,i,j,sum=0,a,b,c;
		cin >> n;
		
		for(i=0;i<n;i++)
		{
			cin >> a >> b >> c;
			sum+=(a*c);
		}
		
		cout << sum << endl;
	}

}
