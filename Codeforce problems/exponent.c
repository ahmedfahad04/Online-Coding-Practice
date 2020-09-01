#include <stdio.h>
#include <math.h>

int fact(int a);

int main()
{
	int x,i,j,n;
	double sum =1;
	scanf("%d %d", &x,&n);
 	
 	
	for(i = n-1;i>0;--i){
		sum = 1 + x* sum /i;
	}
	
	
	printf("Summation is: %lf",sum);
	
}

int fact(int a)
{
	int result = 1;
	
	
	for (;a>0;a--)
	{
		
		result = result*a;
	}
	
	return result;
}
