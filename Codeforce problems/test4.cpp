#include <bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,i,j,k,ev=0,od=0,x,f=1;
		cin >> n >> x;

		for(i=0; i<n; i++)
		{
			cin >> k;
			if(k&1) od++;
			else ev++;
		}

		if(x&1)
		{
			for(i=1; i<=od; i+=2)
			{
				if(x<=od ||(i<=od && (x-i)<=ev))
				{
					f=0;
					cout << "Yes" << endl;
					break;
				}
			}

			if(f) cout << "No" << endl;

		}
		else
		{
			for(i=1; i<=od; i+=2)
			{
				if((i<=od && (x-i)<=ev)
				        || ((x-i)<=od && i<=ev))
				{
					f=0;
					cout << "Yes" << endl;
					break;
				}

			}
			if(f) cout << "No" << endl;
		}
	}
}


