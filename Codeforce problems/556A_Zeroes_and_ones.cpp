#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;


int main()
{
	int t;
	cin >> t;
		string s;
		cin >> s;
		ll i,j,one=0,zero=0;
		for(i=0;i<s.size();i++)
		{
			if(s[i] == '1') one++;
			else if(s[i] == '0') zero++;
		}
		
		cout << abs(zero-one) << endl;
	
}


