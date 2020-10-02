#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;


int main()
{
	int n,k,i,m;
	cin>> n >>k;
	
	if(n>=k)
	{
		if(n&1) m = (n/2)+1;
		else m = n/2;
		
		for(i=m;i<=n;i++)
		{
			if(i%k == 0) {
				cout << i ;
				return 0;
			}
		}
		
		cout << -1;
		
	}
	else cout << -1 ;
}


