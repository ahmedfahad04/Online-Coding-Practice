#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll exp(ll a, ll b)
{
	ll result = 1;
	while(b!=0) {
		if(b&1)
		{
			result *= a;
		}
		a = a*a;
		b >>= 1;
	}
	return result;
}

int main()
{
	cout << exp(2,3) << endl;
}

/* Algo steps:

3 is odd so -> result = 1*2 = 2
a = 2*2 = 4
b = 1
1 is odd so -> result = 4*2 = 8
a = 8*8 = 64
b = 0....so ends here :)

return 8

*/
