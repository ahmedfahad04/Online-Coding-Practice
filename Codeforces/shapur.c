#include <stdio.h>
#include <string.h>

int main()

{
    char a[150],b[150],c[150],i,j,k;
    gets(a);
    gets(b);

    j=strlen(a);

    for(i=0;i<j;i++)
    {
        if(a[i] == b[i]) c[i] = 0;
        else c[i] = 1;
    }

    for(i=0;i<j;i++)
    {
        printf("%d", c[i]);
    }


}
