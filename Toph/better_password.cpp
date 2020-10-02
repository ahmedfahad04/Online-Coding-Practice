#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	vector<int > g,c;
	int i,n,j;
	cin >> n;
	
	for(i=0;i<n;i++)
	{
		cin >> j;
		g.push_back(j);
		c.push_back(j);
	}
	
	sort(c.begin(),c.end());
	
	if(g == c) cout <<"Yes";
	else cout << "No";
}


