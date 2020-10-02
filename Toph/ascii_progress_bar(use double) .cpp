#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	double a; //you must use double istead of float. but why??
	cin >> a;
	int k,i,j;
	
	j = floor(a);
	k = j/10;
	
	
	cout << '[';
	for(i=0;i<k;i++)
	cout << '+';
	
	for(i=0;i<(10-k);i++)
	cout << '.';
	
	cout << ']';
	
	cout << " " << j << '%';
}


