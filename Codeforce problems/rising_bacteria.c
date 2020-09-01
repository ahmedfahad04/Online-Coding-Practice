#include <stdio.h>

int main()
{

    long long int x,i,j,count=0;
    scanf("%lld", &x);

    for(i=0;;i++)
    {
        j = x%2;
        if(j == 1) count++;
        x/= 2;
        if(x == 0) break;
    }
    printf("%lld",count);
 
}