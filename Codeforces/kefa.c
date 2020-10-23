#include <stdio.h>

int main()
{
	long long int i,j=0,n,a[100010], b[100020]={0},max;
	scanf("%lld", &n);
	for(i=0;i<n;i++)
	scanf("%lld", &a[i]);
	
	for(i=0;i<n;i++)
	{
		if(a[i] <= a[i+1]) b[j]++;
		else 
		{
		b[j]++;	
		j++;
		}
	}
	
	max=b[0];
	for(i=0;i<j;i++)
	{
		if(max<b[i]) max=b[i];
	}
	

	printf("%lld", max);
}
