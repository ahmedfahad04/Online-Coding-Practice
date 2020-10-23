#include <stdio.h>

int main()

{
    int a[100],b[100],i,s,n;
    scanf("%d%d", &s,&n);

    for(i=0;i<n;i++)
    {
        scanf("%d%d", &a[i],&b[i]);
    }

    for(i=0;i<n;i++)
    {
        if(s>a[i]) s = s+b[i];
        else {
            printf("NO");
            return 0;
        }
    }
    printf("YES");


}
