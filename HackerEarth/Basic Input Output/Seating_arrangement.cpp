#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main()
{
	ll t;
	cin >> t;
	
	while(t--)
	{
		ll n,d,r;
		cin >> n;
		
		d = n/6;
		r = n%6;
		if(r == 0){
			if(d&1) cout << n+1 << " " << "WS\n";
			else cout << n-11 << " " << "WS\n";
 		}
		else if(r == 1){
			
			if(d&1) cout << n-1 << " " << "WS\n";
			else cout << n+11 << " " << "WS\n";
		}
		else if(r == 2){
			
			if(d&1) cout << n-3 << " " << "MS\n";
			else cout << n+9 << " " << "MS\n";
		}
		else if(r == 3){
			if(d&1) cout << n-5 << " " << "AS\n";
			else cout << n+7 << " " << "AS\n";
		}
		else if(r == 4){
			if(d&1) cout << n-7 << " " << "AS\n";
			else cout << n+5 << " " << "AS\n";
		}
		else if(r == 5){
			if(d&1) cout << n-9 << " " << "MS\n";
			else cout << n+3 << " " << "MS\n";
		}
		
	}
}
