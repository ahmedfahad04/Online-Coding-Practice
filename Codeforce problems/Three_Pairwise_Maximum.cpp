#include <bits/stdc++.h>
using namespace std;

int main()
{
	long int t;
	cin >> t;
	
	while(t--)	
	{
		long int x,y,z,a,b,c;
		cin >> x >> y >> z;
		
		a = max(x,y);
		b = max(a,z);
		
		a = min(x,y);
		c = min(a,z);
		
		if((x == b && y == b) || (y == b && z == b) 
		|| (x == b && z == b) ||(x == b && z == b && y == b))
		{
			cout << "Yes" << endl;
			cout << c << " " << c << " " << b << endl;
		}
		else cout << "NO" << endl;
		 
	}
}
