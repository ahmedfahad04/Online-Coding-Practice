#include <bits/stdc++.h>
using namespace std;


long long nCr( long long a , long long b)
{
	if(a == b ) return 1;
	if(b == 1) return a;
	else return (nCr(a-1,b-1)+nCr(a-1,b));
}

int main()
{
	long long n,r;
	cin >> n >> r;
	
	cout << n << "C" << r << " = "<< nCr( n,  r);
}
