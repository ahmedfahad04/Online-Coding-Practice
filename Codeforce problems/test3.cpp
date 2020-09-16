#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
#define N 100


bool res(ll x)
{
	ll i,j,k,f=1,m;

	set<ll>:: iterator it;
	set<ll> s;
	
	if(x == 3 || x == 5) return 1;
	while(x%2 == 0)
	{
		s.insert(2);
		s.insert(x/2);
		x/=2;
	}

	for(k=3; k<=sqrt(x); k+=2)
	{
		while(x%k == 0 )
		{
			s.insert(k);
			s.insert(x/k);                                    
			x/=k;
		}
	}

	if(s.size()!=0)
	{
		for(it=s.begin(); it!=s.end(); it++)
		{
			f=0;
//				cout << *it  << endl;

			if(*it == 2 || *it == 5 || *it == 3 || *it == 1)
			{
				continue;
			}
			else
			{
				return 0;
				break;
			}

		}
	}

	if(f==0)	return 1;
	else return 0;
}


int main()
{
	ll ct=1,num=2;
	for(num=2; num<N; num++)
	{
		if(res(num) == 1)
		{
			cout << num <<"**"<< endl;
			ct++;
		}
	}

	cout << "Serial is: " << ct << endl;
}











