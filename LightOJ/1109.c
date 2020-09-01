#include <stdio.h>
#include<math.h>

int main()
{
    int t,i;
    scanf("%d", &t);

    for(i=0;i<t;i++)
    {
        unsigned long long a,b,c,max,sum=0,k;
        scanf("%llu %llu %llu", &a, &b,&c);
        getchar();

        max = ((a>b)?a:b>c)?(a>b)?a:b:c;
        k = max*max;

        sum = a*a+b*b+c*c;

        if((sum-k) == k) printf("Case %d: yes\n",i+1);
        else printf("Case %d: no\n",i+1);
        

        //printf("Result is: %llu    %llu\n",(sum-k),k);
    }
}
