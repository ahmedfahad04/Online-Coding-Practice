#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MAX 100000

ll fibo(ll x)
{
	if(x == 0) return 0;
	if(x == 1) return 1;
	else return (fibo(x-1)+fibo(x-2));
}

int main()
{
	ll n;
	cin >> n;
	cout << fibo(n) ;
}
