#include <bits/stdc++.h>
#define MAX 100007
using namespace std;
bool prime[MAX];

int main()
{
	memset(prime,true, sizeof prime);
	prime[0] = prime[1] = 0;
	
	for(int i=2;i<MAX;i++)
	{
		if(prime[i] == false) continue;
		else{
			for(int j=2*i;j<MAX;j++)
			{
				prime[j] = false;
			}
		}
	}
	
	for(int k=0;k<100;k++)
	{
		if(prime[k] ==  true) cout << k << endl;
	}
	
}
