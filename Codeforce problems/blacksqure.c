#include <stdio.h>
#include <string.h>

int main()
{  static unsigned long long int a[100010],i,sum=0,k,x;

    for(i=0;i<4;i++)
        scanf("%llu", &a[i]);
    scanf("%llu", &x);

   if(x>= 1 && x<= 9) {
         sum = sum + a[x-1];
   }
   else{
    for(;;)
    {
        k=x%10;
        sum = sum + a[k-1];
        x=x/10;
        if(x>= 1 && x<= 9) {
         sum = sum + a[x-1];
            break;
        }
    }
   }
    getchar();

    printf("%llu\n", sum);

}
