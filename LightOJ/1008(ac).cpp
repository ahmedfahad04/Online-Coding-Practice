#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
    unsigned long long int x,y,i,j,n,t,a;
	scanf("%llu", &t);
    
    for(j=1;j<=t;j++){
    	
    scanf("%llu", &n);
    

    		a = floor(sqrt(n-1));
    		
    		
    		
    		if(a%2 != 0){
    			if((n-1) - a*a > a) printf("Case %d: %llu %llu\n",j,a+1,2*a-((n-1)-a*a)+1);
    			else if((n-1) - a*a == a) printf("Case %d: %llu %llu\n",j,a+1,a+1);
    			else printf("Case %d: %llu %llu\n",j,((n-1) - a*a)+1,a+1);
			}
			
			if(a%2 == 0){
    			if((n-1) - a*a > a) printf("Case %d: %llu %llu\n",j,2*a-((n-1)-a*a)+1,a+1);
    			else if((n-1) - a*a == a) printf("Case %d: %llu %llu\n",j,a+1,a+1);
    			else printf("Case %d: %llu %llu\n",j,a+1,(n-1) - a*a+1);
			}
		
		    	
    	
	
}

}
    
