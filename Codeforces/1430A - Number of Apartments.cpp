#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 10000007
using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		int n;
		cin >> n;
		
		// 7
		if(n%7 == 0)
		{
			cout << 0 <<" " << 0 << " " << n/7;
		}
		else if((n-7)%3 == 0 && n>8) {
			cout << (n-7)/3 <<" " << 0 << " " << 1;
		}
		else if((n-7)%5 == 0 && n>8) {
			cout << 0 <<" " << (n-7)/5 << " " << 1;
		}
		// 5 
		else if(n%5 == 0)
		{
			cout << 0 <<" " << n/5 << " " << 0;
		}
		else if((n-5)%3 == 0 && n>7 ) {
			cout << (n-5)/3 <<" " << 1 << " " << 0;
		}
		else if((n-5)%7 == 0 && n>7 ) {
			cout << 0 <<" " << 1 << " " << (n-5)/7;
		}
		// 3
		else if(n%3 == 0)
		{
			cout << n/3 <<" " << 0 << " " << 0;
		}
		else if((n-3)%5 == 0 && n>5) {
			cout << 1 <<" " << (n-3)/5 << " " << 0;
		}
		else if((n-3)%7 == 0 && n>5) {
			cout << 1 <<" " << 0 << " " << (n-3)/7;
		}
		else cout << -1 ;
		
		cout << endl;
	}
}
