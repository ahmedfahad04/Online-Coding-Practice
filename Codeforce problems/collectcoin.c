#include <stdio.h>

int main()
{
    long long int a[10010],b[10010],c[10010],n[10010],t,i,j,k;
    scanf("%lld", &t);

    for(i=0;i<t;i++)
        scanf("%lld %lld %lld %lld", &a[i], &b[i], &c[i], &n[i]);

    for(i=0;i<t;i++)
    {
        if((a[i] == b[i] && c[i] == b[i] && a[i] == c[i]) && ((a[i]+b[i]+c[i]+n[i])%3 == 0))
            printf("YES\n");
        else  if((a[i]< n[i] && c[i]< n[i] && a[i] < n[i]) && ((a[i]+b[i]+c[i]+n[i])%3 == 0))
             printf("YES\n");
        else if (((a[i]+b[i]+c[i]+n[i])%3 == 0) && ((n[i] > a[i] && n[i] > b[i]) || (n[i] > c[i] && n[i] > b[i]) || (n[i] > a[i] && n[i] > c[i]))) printf("YES\n");
        else printf("NO\n");

    }
}
