#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	int i,j,h=0,f=0;
	j = s.size();
	for(i=0;i<(j);i++){
		
		if(s[i] == 'H' && s[i+1] == 'H') {
			f = 1;
			break;
		}
		
		if(s[i] == 'H') h++;
		else if(s[i] == '.') {
			s[i] = 'B';
		}
	}
	
	if( f == 1) cout << "NO";
	else {
		cout << "YES\n";
		cout << s;
	}
	

	
}
