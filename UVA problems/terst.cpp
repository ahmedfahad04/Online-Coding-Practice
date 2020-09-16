#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

	while(1)
	{
		ll a,b,c,d,i,j,sum=0;
		cin >> a >> b >> c >> d;

		if(a == 0 && b == 0 && c == 0 && d == 0) break;
		else
		{
			if((a-b)>0) sum += (a-b)*9;
			else sum += (a-b+40)*9;
			
			if((c-b)>0) sum += (c-b)*9;
			else sum += (c-b+40)*9;
			
			if((c-d)>0) sum += (c-d)*9;
			else sum += (c-d+40)*9;
		
			
			cout << sum+1080 << endl;
		}
	}

}
