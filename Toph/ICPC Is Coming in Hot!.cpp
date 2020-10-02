#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
	ll a[10]={0},i,j,k,b[10],max=0,id;
	
	string s;
	cin >> s;
	
	
	for(i=0;i<s.size();i++)
	{
		a[s[i]-'0']++;
	}
	
	for(i=0;i<10;i++)
	{
		
		if(a[i]>max)
		{
			max = a[i];
			id = i;
		}
	}
	
	cout << id ;
	
}
