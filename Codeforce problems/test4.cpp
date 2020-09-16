#include <bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
	ll i;
	for(i=1;;i++)
	{
	
		string ch;
		cin >> ch;
		if(ch == "*")break;
		else{
			
			if(ch == "Hajj")
			cout << "Case " << i <<": "<<"Hajj-e-Akbar"<<endl;
			else
			cout << "Case " << i <<": "<<"Hajj-e-Asghar"<<endl;

		}
	
	}


}


