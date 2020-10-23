#include <stdio.h>

long long int factorial(long long num)
{
    long long int i,j,fact=1;

    for(;num != 1;)
    {
        fact = fact*num;
        num--;
    }

    return fact;

}

int main()
{   
    long long int a,b,m,n;
    scanf("%lld %lld", &a, &b);

   if(a>b) printf("%lld",factorial(b));
   else printf("%lld", factorial(a));

}

//Accepted

