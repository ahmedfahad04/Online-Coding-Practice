#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	int d[30],c[30],m[30],i,j,n,cp,mem;
	set<string> fail;
	cin >> n >> cp >> mem;

	for(i=0; i<n; i++)
	{
		cin >> d[i];
		cin >> c[i];
		cin >> m[i];
	}

	for(i=0; i<n; i++)
	{
		if(c[i]>cp)
		{
			cout << "CLE";
			return 0;
		}
		else if(m[i]>mem)
		{
			cout << "MLE";
			return 0;
		}
		else if(d[i] != 0)
		{
			cout << "WA";
			return 0;
		}

	}

	cout << "AC";
}


