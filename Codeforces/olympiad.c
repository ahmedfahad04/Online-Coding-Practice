#include <stdio.h>
#include <string.h>

int main()
{
    char a[5000],b[5000],c[5000];
   long int i,j,l,n,m,x,ch[5000],k,min;

    scanf("%ld", &x);

   for(i=0;i<x;i++)
    scanf("%ld", &ch[i]);


    for(i=0,j=0;i<x;i++)
    {
        if(ch[i] == 1)
        {
            a[j] = i+1;
                j++;
        }
    }

    for(i=0,j=0;i<x;i++)
    {
        if(ch[i] == 2)
        {
            b[j] = i+1;
            j++;
        }
    }

    for(i=0,j=0;i<x;i++)
    {
        if(ch[i] == 3)
        {
            c[j] = i+1;
            j++;
        }
    }
    for(l=0;a[l] != '\0';l++)
        l++;
    for(m=0;b[m] != '\0';m++)
        m++;
    for(n=0;a[n] != '\0';n++)
        n++;

    printf("%d ", l/2);
    printf("%d ", m/2);
    printf("%d ", n/2);


    getchar();

   k = (l<m)?l:m;
   min = (k<n)?k:n;



    printf(" %ld\n",min);

/*
    for(i=0;i<min;i++){
        printf("%ld %ld %ld\n", a[i],b[i],c[i]);
    }

*/




}
