#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MAX 100000



int main()
{
	int year;
	cin >> year;
		
	if(year%4 == 0 && year%400 != 0) cout << "Yes";
	else cout << "No";
}
