#include <bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		string s;
		int i,mn=INT_MAX,c1=0,c0=0;
		cin >> s;
		
		for(i=0;i<s.size();i++)
		{
			if(s[i] == '1') c1++;
			else c0++;
			
		}
		
		mn = min(c1,c0);
		if(mn&1) cout << "DA" << endl;
		else cout << "NET" << endl;
		
		 
	}
}


