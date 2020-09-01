#include <bits/stdc++.h>
#define MAX 1000007
using namespace std;

//bool prime(long int n)
//{
//	long int i,j;
//
//	if(n<2) return false;
//	else{
//		for(i=2;i*i<=n;i++)
//		{
//			if(n%i==0) return false;
//		}
//	}
//	return true;
//}

int main()
{
	long int a,i,j,s,x,y,k=0,l=1e7;
	vector < long int> num;

	vector<long int> prime;
	prime.assign(MAX, 1);
	
	prime[0] = prime[1] = false;
	
	for(i=2;i<MAX;i++)
	{
		if(prime[i] == false);
		else{
			for(j=2*i;j<MAX;j+=i)
			{
				prime[j] = false;
			}
		}
	}
	


	cin >> s;
	for(i=0;i<s;i++)
	{
		cin >> a;
		if(prime[a] == 1) num.push_back(a);

	}

	for(i=0;i<num.size();i++)
	{
		k = max(num[i],k);
		l= min(num[i],l);
		//cout << num[i] << endl;
	}
	
	if(num.size() == 0) cout << "-1" << endl;
	else
	cout <<  abs(k-l) << endl;
	
	

}
