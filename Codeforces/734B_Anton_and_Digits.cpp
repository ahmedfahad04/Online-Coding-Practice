#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 10000007
using namespace std;


int main()
{
	
		ll two,three,five,six,i,j,sum,k;
		cin >> two  >> three >> five >> six;
		
		j = min(two,min(five,six));
		two -= j;
		k = min(two,three);
		
		cout << j*256+k*32 ;
		
	
}


