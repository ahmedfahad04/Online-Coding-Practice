#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;


int main()
{
	ll t;
	cin >> t;
	while(t--)
	{
		ll n,k,i,j;
		cin >> n >> k;

		if(n%2 == k%2)
		{
			if(k>n) cout << "NO\n";
			else
			{
				cout << "YES" << endl;
				for(i=0; i<(k-1); i++)
					cout << 1 << " ";

				cout << n-(k-1) << endl;
			}

		}
		else if(n%2 == 0 && k&1 && (n/2)>=k)
		{
			cout << "YES" << endl;
			for(i=0; i<(k-1); i++)
				cout << 2 << " ";

			cout << n-(k-1)*2 << endl;
		}
		else cout << "NO\n";
	}
}


