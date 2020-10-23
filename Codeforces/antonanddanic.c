#include <stdio.h>

int main()
{
	char ch[100020];
	long int i,n,a=0,d=0,j;
	
	scanf("%ld", &n);
	getchar();
	
	gets(ch);
	
	for(i=0;i<n;i++)
	{
		if(ch[i] == 'A') a++;
		else if (ch[i] == 'D') d++;
	}
	
	if(a>d) printf("Anton");
	else if(d>a) printf("Danik");
	else if(a == d) printf("Friendship");
	
}
