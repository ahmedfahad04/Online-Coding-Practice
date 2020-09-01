#include <stdio.h>

int main()
{
 long long int i,j,k,x,n,s1=0,s2=0,count=0,m,a[1000];
	scanf("%lld", &n);
	scanf("%lld", &x);

	for(i=0;count <= n; x/=10)
	{
		j=x%10;
		a[i] = j;
		i++;
		if(count < n/2 )
		{
			
			s1 = s1 + j;
			count++;
		}
		else if(count >= n/2)
		{
			s2 = s2 + j;
			count++;
		}
		

	}
	
	for(i=0;i<n;i++)
	{
		if(a[i] == 1  || a[i] == 2 || a[i] == 3 || a[i] == 5 || a[i] == 6 || a[i] == 8 || a[i] == 9) 
		{
			printf("NO");
			return 0;
		}
	}
		
	if(s1 == s2) printf("YES\n");
	else printf("NO\n");
	
	printf("S1 = %d  S2 = %d", s1,s2);
}
