#include <bits/stdc++.h>
#define MAX 1000007
using namespace std;

int main()
{
	vector<long int > prime;
	prime.assign(MAX,1);
	
	prime[0] = prime[1] = 0;
	
	long int i,j,k,num,t;
	
	for(i=2;i<MAX;i++)
	{
		if(prime[i] == 0) continue;
		else
		{
			for(j=2*i;j<=MAX;j+=i)
			prime[j] = 0;
		}
		
	}
	
		cin >> num;
		if(num%2 == 0)
		{
			k = num/2;
			if(prime[k] == 0) cout << k << " " << k << endl;
			else cout << k+1 << " " << num-(k+1)<< endl;
		}
		else
		{
			k = (num)/2;
			for(;;)
			{
				if(prime[k] == 0 && prime[num-k] == 0) 
				{
					cout << k << " " << num-k << endl;
					break;
				}
				else k++; 
			}			
		}
		 
	
	
	
}
