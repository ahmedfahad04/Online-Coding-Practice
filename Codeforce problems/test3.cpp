#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long 
#define N 1000


int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		long int n,m,i,j,f=1;
		set<long int> a,b;
		cin >> n >> m;
		
		for(i=0;i<n;i++)
		{
			cin >> j;
			a.insert(j);
		}
		
		for(i=0;i<m;i++)
		{
			cin >> j;
			b.insert(j);
		}
		
		
		
		
			for(auto x: b)
			{
				if(a.count(x))
				{
					f=0;
					cout << "YES" << endl;
					cout << 1 <<" " <<x<<endl;
					break;
				}
			}
			if(f) cout << "NO" << endl;
		
	}
}	
