#include <stdio.h>
#define ll long long int

ll fact(ll x)
{
	if(x==0)return 1;
	if(x==1) return 1;
	return fact(x-1)*x;
}


int main()
{
	ll n;
	scanf("%lld", &n);
	
	if(n < 20)
	{
		 printf("%lld", fact(n)%10000);
	}
	else printf("0000");
	
}
/*


int main()
{
	printf("%d", 1234%1000);
*/
