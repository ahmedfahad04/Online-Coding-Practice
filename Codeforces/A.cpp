#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main()
{
    int n,i,j,r[110],b[110],x=0,y=0;
    double k;
    cin >> n;
    for(i=0;i<n;i++)
    {
    	cin >> r[i];
	}
    
    for(i=0;i<n;i++)
    {
    	cin >> b[i];
	}
	
	for(i=0;i<n;i++)
	{
		if(r[i] == 1 && b[i] == 0) x++;
		else if(r[i] == 0 && b[i] == 1) y++;
	}
	
	if(x==0) cout << -1 ;
	else
	{
	 k = (double)(y+1)/(double)x;
	 cout << ceil(k) ;
	}
    
}
