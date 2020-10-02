#include <stdio.h>
int main(int argc, char *argv[])
{
	int a[3][3],b[3][3],c[3][3],i,k,j;
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
			scanf("%d", &a[i][j]);
	}

	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
			scanf("%d", &b[i][j]);
	}

	for(i=0; i<2; i++)
	{
		for(k=0; k<2; k++)
			c[i][k]=a[i][0]*b[0][k]+a[i][1]*b[1][k];
	}

	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
			printf("%d ", c[i][j]);

		printf("\n");
	}
}
