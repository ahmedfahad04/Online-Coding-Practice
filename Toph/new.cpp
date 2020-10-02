#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MAX 10000007


int main()
{
	string s;
	cin>> s;
	stack<char> b,c,sq;
	int i,j;
	for(i=0;i<s.size();i++)
	{
		if(s[i] == '(') b.push('(');
		else if(s[i] == ')' && !s.empty()) b.pop();
		
		
		if(s[i] == '{') c.push('(');
		else if(s[i] == '}' && !s.empty()) c.pop();
		
		
		if(s[i] == '[') sq.push('(');
		else if(s[i] == ']' && !s.empty()) sq.pop();
	}
	
	if(b.size()!=0 || c.size()!=0 || sq.size()!=0) cout << "No";
	else{
		
	}
	
}
