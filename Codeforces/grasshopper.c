#include <stdio.h>
#include <string.h>

int main()
{
    char ch[150];
    int d[150],i,j,max,l,sub[150],k;

    gets(ch);

    for(i=0,j=0;i<strlen(ch);i++)
    {
        if(ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U' ||ch[i] == 'Y' )
        {
            d[j] = i+1;
            j++;
        }
    }

    for(i=0,k=0;i<j;i++,k++){
        sub[k] = (d[i+1]-d[i]);

    }



    max=sub[0];
    for(i=0;i<j;i++)
    {
        if(max<sub[i]) max=sub[i];
    }

    printf("%d", max);


}
