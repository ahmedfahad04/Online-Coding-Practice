#include <bits/stdc++.h>
#include <math.h>
#define MAX 1000099
using namespace std;


int main()
{
	long int i,j,k,t,num;

		scanf("%ld", &t);
		
		vector<long int> prime,re,data;

		prime.assign(MAX, 1);
		
	
		prime[0] = prime[1] = false;
	
		//eratosthenes
		for(i=2;i<MAX;i++)
		{
			if(prime[i] == false) continue;
			else{
				if((i-1)%11 == 0) re.push_back(i);
				for(j=2*i;j<MAX;j+=i)
				prime[j] = false;
			}
		}
		
		for(i=0,j=0;i<MAX;i++)
		{
			if(i!=re[j]) data.push_back(re[j]) ;
			else if(i == re[j] ) 
			{
				data.push_back(re[j]);
				j++;
			}
		}
				
		while(t--){
			
		scanf("%ld", &num);
		printf("%ld\n", data[num]);
		
		}
		
		


}

/* 1. size 1000099
2. k<=N ; must remember
3. always use scanf, printf for optimized solution
4. always prefer vector rather than MAP

### Access Complexity of VECTOR is O(1)
and Access Complexity of MAP is O(logn)

*/

