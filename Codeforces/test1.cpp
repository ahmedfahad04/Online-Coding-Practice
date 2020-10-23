#include <bits/stdc++.h>
#define MAX 11000
#define ll long long int
using namespace std;
 
 
int main() {
 
	ll t;
	cin >> t;
	
	while(t--)
	{
	 	ll x,y,a,b,i,j;
	 	cin >> x >> y >> a >> b;
	 	
	 	i = (x+y)*a;
	 	
	 	if(x>=y)
	 	j =  y*b+(x-y)*a ;
	 	else
	 	j =  x*b+(y-x)*a ;
	 	
	 	if(i<=j) cout << i << endl;
	 	else cout << j << endl;
	}
 
}
