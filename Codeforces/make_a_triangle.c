#include <stdio.h>

int main()
{
    int a[3],i,j,x,y;

    for(i=0;i<3;i++)
    {
        scanf("%d", &a[i]);
    }
    
    for(j=3;j>0;j--)
    {
        for(i=0;i<j-1;i++)
        {
            if(a[i]>a[i+1])
            {
                x = a[i];
                a[i] = a[i+1];
                a[i+1] = x;
            }
        }
    }

    a[2]+=1;
    if((a[2]-a[1]-a[0]) < 0) printf("0");
    else
    {
        printf("%d",a[2]-a[1]-a[0]);
    }
    

   
}