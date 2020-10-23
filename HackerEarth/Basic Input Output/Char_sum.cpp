#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main()
{
	string s;
	cin >> s;
	int i,j,sum=0;
	j = s.size();
	for(i=0;i<(j);i++){
		sum += s[i]-96;
	}
	
	cout << sum;
	

	
}
