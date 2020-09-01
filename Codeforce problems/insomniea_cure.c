#include <stdio.h>

int main()
{
    long long int k,l,m,n,d,count = 0,i;
    scanf("%lld%lld%lld%lld%lld", &k,&l,&m,&n,&d);

    for(i=d;i>0;i--)
    {
        if(i%k == 0 || i%l == 0 || i%m == 0 || i%n == 0 ) count++;
    }
    printf("%lld",count);
}