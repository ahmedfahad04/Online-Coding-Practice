#include <stdio.h>
#include <string.h>

int main()
{
	char ch[1000];
	int i=0 ,j,l=0,m=0,k;
	
	for(;;)
   {
   	scanf("%c", &ch[i]);
   	if(getchar() == '\r') break;
   	i++;
   	k++;
   }
   
   for(i=0;i<k;i++)
   printf("%c", ch[i]);


	
}
