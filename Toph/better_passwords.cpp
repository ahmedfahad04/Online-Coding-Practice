#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	string s;
	cin >> s;
	
	int i,j;
	
	char k;
	k = toupper(s[0]);
	cout << k;
	
	for(i=1;i<s.size();i++)
	{
		if(s[i] == 's') cout << '$';
		else if(s[i] == 'i') cout << '!';
		else if(s[i] == 'o') cout << "()";
		else cout << s[i];
	}
	

	cout << '.' ;
}


