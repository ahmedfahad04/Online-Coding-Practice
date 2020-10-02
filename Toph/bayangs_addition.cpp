
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	string a,b;
	cin >> a >> b;
	ll i,j,k=0;
	
	j = a.size();
	k = b.size();
	//cout << a.size() << " " << b.size() << endl;
	for(i=1;i<=a.size();i++)
	{
		
		if(((a[j-i]-'0') + (b[k-i]-'0')) >= 10 )  {
			//cout << "a= " << (a[j-i]-'0')  << " b= " << (b[j-i]-0) << endl;
			cout << "Yes" ;
			return 0;
		}
	}
	cout << "No";
}


