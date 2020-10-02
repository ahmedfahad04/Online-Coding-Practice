#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int a,b,k;
		cin >> a >> b;
		k = floor((a+b)/2);
		if(k%2 !=0) cout << "Oops!";
		else cout << "Sadia will be happy.";
		
		cout << endl;
	}

}
