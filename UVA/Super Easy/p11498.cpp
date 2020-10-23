#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	while(1)
	{
		ll k,m,n,i,j,l;
		vector<int> a,b;

		cin >> k;
		if(k == 0) break;
		else
		{
			cin >> n >> m;

			for(i=0; i<k; i++)
			{
				cin >> j >> l;
				// cout << "RE: " << j-n << " " << l-m << endl;
				if((j-n) ==0 || (l-m) == 0) cout << "divisa" << endl;
				else if((j-n) > 0 && (l-m) > 0) cout << "NE" << endl;
				else if((j-n) > 0 && (l-m) < 0) cout << "SE" << endl;
				else if((j-n) < 0 && (l-m) < 0) cout << "SO" << endl;
				else if((j-n) < 0 && (l-m) > 0) cout << "NO" << endl;
			}
		}


	}
}
