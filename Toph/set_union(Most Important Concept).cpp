#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	vector <int> a,b;
	set <int> v;
	int i,j,n,m;
	cin >> n >> m;

	for(i=0; i<n; i++)
	{
		cin >> j;
		a.push_back(j);
	}


	for(i=0; i<m; i++)
	{
		cin >> j;
		b.push_back(j);
	}


	for(auto x: a)
		v.insert(x);

	for(auto x: b)
		v.insert(x);
		
		
	auto it = v.begin();//reminder people you should not use space after last digit. Because it is SET where last place dont have any space.
	cout << *it;

	for(it++; it != v.end(); it++)
		cout << " " << *it;


}


