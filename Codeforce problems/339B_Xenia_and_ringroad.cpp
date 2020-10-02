#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
#define N 100010


int main()
{
	ll n,m,i,j,sum=0,v[N];
	cin >> n >> m;

	for(i=0;i<m;i++)
	{
		cin >> v[i];
	}
//	for(i=0;i<m;i++)
//	cout << v[i] << endl;

//	sum += (v[0])-1;
//	cout << sum << endl;
	for(i=0;i<m-1;i++)
	{
		if(v[i]<=v[i+1]) sum += (v[i+1]-v[i]);
		else sum += n-(v[i] -v[i+1]);
		//cout << sum << endl;
	}
	sum += v[0]-1;
	cout << sum ;
}
