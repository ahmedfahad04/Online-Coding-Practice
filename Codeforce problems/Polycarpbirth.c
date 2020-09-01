#include <stdio.h>

int main()
{
    long long int x[1010],t,i,j,k,count[1050];
    scanf("%lld", &t);

    for(i=0;i<t;i++)
    {
        scanf("%lld", &x[i]);

        k = 0;



        for(;x[i] != 10;x[i]--)
        {
            if (x[i]%11 == 0) k++;
        }
        count[i] = k;

    }

    for(i=0;i<t;i++)
    printf("%lld\n", count[i]+9);
}
