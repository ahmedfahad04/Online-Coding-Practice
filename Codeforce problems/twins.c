#include <stdio.h>

int main()
{
    int a[150],n,i,s=0,j,t=0;
    scanf("%d", &n);

    for(i=0;i<n;i++)
    scanf("%d", &a[i]);

    for(j=n;j>0;j--)
    {
        for(i=0;i<(j-1);i++)
        {
            if(a[i] > a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    }



    for(i=0;i<n;i++)
    {t=t+a[i];

    }



    if(n == 1) printf("1");
    else if(n == 2){
        if(a[0] == a[1]) printf("2");
        else printf("1");
    }
    else{
    for(i=(n-1),j=1;i>0;i--)
    {
        s=s+a[i];

            if(s>(t-s)) {
                printf("%d", j);
                break;
                }
            else if(s==(t-s)) {
                printf("%d", j+1);
                break;
                }
            else j++;


    }
        }
}
