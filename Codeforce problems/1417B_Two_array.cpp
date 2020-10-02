#include <bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		ll n,k,i,j,cnt=0,y=0;
		vector<ll> v,e;
		cin >> n >> k;

		for(i=0; i<n; i++)
		{
			cin >> j;
			
			if(j&1) e.push_back(0);
			else e.push_back(1);

			if(j<(k/2)) v.push_back(0);
			else if(j>(k/2)) v.push_back(1);
			else if(j == k/2)
			{
				v.push_back('?');
				cnt++;
			}
		}

		if(k%2 == 0)
		{
			for(i=0; i<v.size(); i++)
			{
				if(v[i] == '?')
				{
					y++;
					if(y<=(cnt/2)) cout << 1 << " ";
					else cout << 0 << " ";
				}
				else cout << v[i] << " ";
			}


		}
		
		
		else if(k&1)
		{
			for(auto x: e)
				cout << x << " ";

		}


		cout << endl;
	}
}


