#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>> t;
	
	while(t--)
	{
		int n,i,j,f=1;
		vector<int> v;
		
		cin >> n;
		
		for(i=0;i<n;i++)
		{
			cin >> j;
			v.push_back(j);
		}
		sort(v.begin(),v.end());
		
		for(i=1;i<n;i++)
		{
			if(abs(v[i]-v[i-1]) <= 1) continue;
			else{
				f=0;
				cout << "NO" << endl;
				break;
			}
		}
		if(f) cout << "YES" << endl;
	}
	
}
