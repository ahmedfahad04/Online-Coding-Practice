#include <stdio.h>

int main()
{
    long long int t,n[10010],i,m=0,k=1;
    scanf("%lld", &t);

    for(i=0;i<t;i++)
        scanf("%lld", n[i]);

        for(i=0;i<t;i++)
        {
            for(; k <= n[i];k++){
            if(k >= 1 && k <= 9)
            {m++;
            }
            else if (k%11 != 0)
            {
                m++;

            }


            }
k=1;
        }

        printf("\n%lld", m);
}
