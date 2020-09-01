#include <bits/stdc++.h>
using namespace std;

int main()
{
	long int n,i,j;
	cin >> n;

	for(;;) {
		if(n == 1) {
			cout << 8;
			break;
		} else if(n == 2) {
			cout << 4;
			break;
		} else if(n == 3) {
			cout << 2;
			break;
		} else if(n == 4) {
			cout << 6;
			break;
		} else if(n == 0) { // error chilo
			cout << 1;
			break;
		} 
		
		else n-=4;
	}
}
