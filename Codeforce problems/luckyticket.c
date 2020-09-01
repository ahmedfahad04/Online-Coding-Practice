#include <stdio.h>
#include <string.h>

int main()
{
    int x,i,j,p,s1=0,s2=0,l,c=1;
    scanf("%d", &l);
    getchar();
    scanf("%d", &p);

    for(i=1;i<=l;i++)
    {
         if(c<=(l/2))
        {
            s1= s1+(p%10);
            c++;
            p=p/10;
            printf(" a%da ", c);
        }
        else if(c>(l/2))
        {
            s2 = s2+(p%10);
            c++;
            p=p/10;
            printf(" b%db ", c);
        }
    }

    /*if(s1 == s2) printf("Lucky");
    else printf("Not lucky");*/


}
