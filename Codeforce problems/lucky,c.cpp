#include <stdio.h>

int main()
{
	long long int i,x,j,k=0;
	scanf("%lld", &x);
	
	for(;;)
	{
		j=x%10;
		x=x/10;
		
		if(j == 4 || j == 7)
		k++;
		if((x >= 0  && x<=9) && (x == 4 || x == 7) ){
			k++;
			break;
		}
		else if((x >= 0  && x<=9) && (x != 4 || x != 7)) {
			
			break;
		}
		else continue;
		
	}
	
	if((k) == 4 || (k) == 7 ) printf("YES");
	else printf("NO");
	
}
