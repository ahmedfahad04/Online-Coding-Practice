#include <stdio.h>

int main()
{
	int t,i;
	scanf("%d", &t);
	
	for(i=0; i<t; i++)
	{
		int n,j;
		scanf("%d",&n);
		
		if(n<=10) printf("0 %d\n", n);
		else if (n>10) printf("%d %d\n", n-10,10);
	}
}
