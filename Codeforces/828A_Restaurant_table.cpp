//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,a,b,i,j,k=0,c=0;
    vector<long int> v;
	
	cin >> n >> a >> b;
    
    b = b*2;
    
    for(i=0;i<n;i++)
    {
    	cin >> j;
    	v.push_back(j);
	}
    
    for(i=0;i<n;i++)    
    {
    	if(v[i] == 1)
    	{
    		if(a>0)a--;	
    		else if(b>0) {
    			b--;
    			c++;
			}
			else if(c>0)
			c--;
			else k++;
			
		}

		
		if(v[i] == 2)
		{
			
			if(b>0) b-=1;
			else k+=2;
		}
	}
	
	cout << k;
	
	
    
}

