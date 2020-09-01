#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	long int n,a,b,i,j,k=0,one,two;
	vector<long int> v;
	cin >> n >> a >> b;
	
	one = a;
	two = 2*b;
	
	for(i=0;i<n;i++)
	{
		cin >> j;
		v.push_back(j);
	}
	
	for(i=0;i<n;i++)
	{
		if(v[i] == 1)
		{
			if(one != 0) one--;
			else if(two != 0) two--;
			else k++;
		}
		else if(v[i] == 2)
		{
			if(two >= 2) two-=2;
			else k+=2;
		}
	}
	
	cout << k;
	
}
