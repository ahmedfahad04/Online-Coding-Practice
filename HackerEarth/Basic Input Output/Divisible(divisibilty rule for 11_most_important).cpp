#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main()
{

	ll n,i,so=0,se=0,j;
	string s;
	vector<int> v;
	cin >> n;
	for(i=0; i<n/2; i++)
	{
		cin >> s;
		j = s[0]-'0';
		v.pb(j);

		//cout << s[0] << endl;
	}

	for(i=0; i<n/2; i++)
	{
		cin >> s;
		j = s[s.size()-1]-'0';
		v.pb(j);

		//cout << s[s.size()-1] << endl;
	}

	for(i=0; i<v.size(); i++)
	{
		if(i&1) so+=v[i];
		else se += v[i];

	}
	
	if(abs(se-so)%11 == 0) cout << "OUI" ;
	else cout << "NON" ;
}
