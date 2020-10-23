#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

	ll n,i,j,x,sum=0;
	string ch;
	cin >> n;

	while(n--)
	{
		cin >> ch;

		if(ch == "donate")
		{
			cin >> x;
			sum += x;
		}

		if(ch == "report") cout << sum << endl;

	}

}
