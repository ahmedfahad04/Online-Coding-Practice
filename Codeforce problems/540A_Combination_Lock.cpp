#include <bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
	int n,sum=0,a,b,i;
	cin >> n;
	
	string s1;
	cin >> s1;
	string s2;
	cin >> s2;
	
	for(i=0;i<n;i++)
	{
		a = s1[i]-'0';
		b = s2[i]-'0';
		
		if(abs(a-b)>5){
			if(a>b)  sum += b+10-a;
			else  sum += a+10-b;
			
			
		} 
		else sum += abs(a-b);
		
	///	cout <<  sum << endl;
	}
	
	cout << sum ;
}


