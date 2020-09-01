#include <bits/stdc++.h>
#define ll long long int
using namespace std;
#define N 1e8

int main()
{
	cout.tie(0); // to make cin,cout faster
	
	vector< bool > p(N,1); // if data is huge use bool to find prime numbers
	p[0] = p[1] = 0;
	
	ll i,j,cnt=0;
	
	for(i=2;i<N;i++)
	{
		if(p[i] == 0) continue;
		else{
			cnt++;
			if(cnt%100 == 1) cout << i << endl; // to coutn 1,101,201,301....
			for(j=i*i;j<N;j+=i) // use j = i*i instead of j = 2*i to avoid TLE
			{
				p[j] = 0;
			}
		}
	}
	
}
