#include <stdio.h>
#include <stdlib.h>

int main()
{

	int i,j,k,n,s1=0,s2,count = 0;
	char x[100];
	scanf("%d", &n);
	getchar();
	gets(x);

	
	for(i=0;i<n;i++)
	{
		if(count < n/2)
		{
			s1 = s1 + x[i];
			count++;
		}
		else if(count >= n/2)
		{
			s2 = s2 + x[i];
			count++;
		}
	}
	
	for(i=0;i<n;i++)
	{
		if(x[i] == '1'  || x[i] == '2' || x[i] == '3' || x[i] == '5' || x[i] == '6' || x[i] == '8' || x[i] == '9') 
		{
			printf("NO");
			return 0;
		}
	}
	
	if(s1 == s2) printf("YES");
	else printf("NO");

}
