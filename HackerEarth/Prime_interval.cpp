#include <bits/stdc++.h>
#define MAX 1000007
using namespace std;


int main()
{
	long int i,j,t,l,r,count;

		cin >> l >> r;
		vector<long int> prime;
		prime.assign(MAX, 1);
	
		prime[0] = prime[1] = false;
	
		for(i=2;i<MAX;i++)
		{
			if(prime[i] == false);
			else{
				if(i>=l && i<=r) {
					cout << i << endl;
				}
				for(j=2*i;j<MAX;j+=i)
				{
				prime[j] = false;
				}
			}
		}

}
