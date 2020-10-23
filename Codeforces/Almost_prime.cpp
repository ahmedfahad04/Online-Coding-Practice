#include <bits/stdc++.h>
#define MAX 4000
using namespace std;


int fact(int n) {

	set<int> vec;
	for (int x = 2; x <= n; x++) {
		while (n%x == 0) {
			vec.insert(x);
			n /= x;
		}
	}
	int k;
	k = vec.size();
	return k;
}


int main() {


	int x,count=0,i,j;
	cin >> x;

	if(x<6) {
		cout << 0;
		return 0;
	}

	for(i=6; i<=x; i++) 
	if(fact(i) == 2)count++;

	cout << count;

}






