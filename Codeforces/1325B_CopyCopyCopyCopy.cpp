#include <bits/stdc++.h>
using namespace std;


int main()
{
	long int t;
	cin>> t;

	while(t--) {
		long int i,j,n;
		set<long int> a;
		cin >> n;

		for(i=0; i<n; i++) {
			cin >> j;
			a.insert(j);
		}

		cout << a.size()<< endl;
	}
}
