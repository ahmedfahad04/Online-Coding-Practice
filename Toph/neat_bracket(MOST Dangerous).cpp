#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	string s;

	cin >> s;
	int r=0,l=0;


	for(char &c:s)
	{
		if(c == '(') l++;
		else if(c == ')') r++;

		if(r>l)
		{
			cout << "No";
			return 0;
		}
	}

	if(l == r)cout << "Yes";
	else cout << "No";


}


