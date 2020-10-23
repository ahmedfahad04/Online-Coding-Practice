#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,j=0,sum=0,b[100];
	cin >> n;
	getchar();
	char ch[100];
	
	gets(ch);
	
	for(i=1;i<n;i++)
	{
		if(ch[i-1] == '1') sum++;
		else if(ch[i-1] != ch[i]){
			cout << sum << 0;
			sum=0;
			j++;
		}
	}
	if(j) cout << sum ;
	
	
}
