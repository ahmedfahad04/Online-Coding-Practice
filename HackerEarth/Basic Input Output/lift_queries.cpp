#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main()
{
	ll n,t,a=0,b=7,i;
	cin >> t;
	
	for(i=0;i<t;i++)
	{
		cin >> n;
		if(abs(a-n)<=abs(b-n)){
			cout << "A" << endl;
			a = n;
		}
		else{
			cout << "B"<< endl;
			b = n;
		}
		
	}
	
}
