#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	int n,i,j;
	char s[1200];
	vector<char> v;
	
	scanf("%d %[^\n]", &n,s);

	//cout <<"String size: "<< strlen(s) << endl;
	for(i=0;i<strlen(s);i++)
	{
		if(s[i] == 32) v.push_back(s[i]);
		else if((s[i]-n)>=97) v.push_back(s[i]-n);
		else v.push_back(s[i]-n+26);
	}
	
	for (auto x: v)
	cout << x;
}


