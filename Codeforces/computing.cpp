#include <bits/stdc++.h>
using namespace std;

int main()
{
	
	long int n,p1,p2,p3,t1,t2,l[150],r[150],g[150],sum=0,i,j;
	cin >> n>>p1>>p2>>p3>>t1>>t2;
	
	for(i=0;i<n;i++)
	{
		cin >> l[i] >> r[i];
	}	
	
	for(i=0;i<n;i++)
	{
		sum+=p1*(r[i]-l[i]);
		
	}
	
	
	if(n == 1) cout << sum;
	else{
		for(i=1;i<n;i++)
		{
			g[i-1] = l[i] - r[i-1];
			
			
			
			if(t1<=g[i-1]) sum+= p1*t1 ;
			else sum+= g[i-1]*p1 ;
			
			if(t2<=(g[i-1]-t1) && t1<=g[i-1]) sum+= p2*t2 ;
			else if(t2>(g[i-1]-t1) && t1<=g[i-1])sum+= (g[i-1]-t1)*p2;
			
			if((g[i-1]-t1-t2)>0 && t2<=(g[i-1]-t1) && t1<=g[i-1] ) sum+= (g[i-1]-t1-t2)*p3;
			else if((g[i-1]-t1-t2)<=0 && t2<=(g[i-1]-t1) && t1<=g[i-1] )sum+= 0;
			
			
		}
		
		cout << sum ;
		
	}
}
