#include <stdio.h>

int main()
{
    int n[150],x[150],a[150],b[150],t,i,j,k;
    scanf("%d", &t);

    for(i=0;i<t;i++)
        scanf("%d %d %d %d", &n[i],&x[i],&a[i],&b[i]);

    for(i=0;i<t;i++)
    {
        if(a[i] > b[i])
        {
            if(((a[i] - b[i]) + x[i])>=n[i]) printf("%d\n", n[i]-1);
            else printf("%d\n", ((a[i] - b[i]) + x[i]));
        }
        else {
            {
            if(((b[i] - a[i]) + x[i])>=n[i]) printf("%d\n", n[i]-1);
            else printf("%d\n", ((b[i] - a[i]) + x[i]));
        }
        }
    }
}
