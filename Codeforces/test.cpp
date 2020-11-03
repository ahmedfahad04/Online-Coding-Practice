#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;


int main()
{
	int n,m,i,j,k;
	cin >> m >> n;

	if(n>0 && n<=(m*9))
	{
		if(m == 1 && n < 10)
		{
			cout << n << " " << n;
		}
		else if( n == 9*m)
		{
			j=m;
			while(j--) cout << 9;
			cout << " ";

			j=m;
			while(j--) cout << 9;

		}
		else if(n<9 && m>1)
		{
			cout << 1;
			j = (m-((n/9)+2));
			while(j--) cout << 0;
			cout << n-1 << " ";

			cout << n ;
			j = (m-((n/9)+1));
			while (j--) cout << 0;
		}

		else
		{
			if(n%9 == 0)
			{
				cout << 1;
				j = (m-((n/9)+1));
				while (j--) cout  << 0;
				cout << 8;
				k = (n/9) - 1;
				while(k--) cout << 9;
				cout << " ";
			}
			else
			{
				cout << 1;
				j = (m-((n/9)+2));
				while (j--) cout  << 0;
				cout << (n%9)-1;
				k = (n/9) ;
				while(k--) cout << 9;
				cout << " ";
			}


			k = n/9;
			while(k--) cout << 9 ;
			cout << n%9;
			j = (m-((n/9)+1));
			while (j--) cout << 0;
		}
	}
	else if(m == 1 && n == 0) cout << 0 << " " << 0;
	else cout << "-1" << " -1";
}


