#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main()
{
	ll t;
	cin >> t;

	while(t--)
	{
		int g,p,n,i,j,t1=0,t2=0,a,b;
		
		cin >> g >> p;
		cin >> n;
		
		for(i=0;i<n;i++)
		{
			cin >> a >> b;
			t1 += a*g+b*p;
			t2 += a*p+b*g;
		}
		
		if(t1>=t2) cout << t2 << endl;
		else cout << t1 << endl;
	}
}
