#include <stdio.h>

int is_prime(long long int x){
    for(long long int i=2;i*i<=x;i++)
    {
        if(x%i == 0)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    long long int a,t,n,k,i;
    scanf("%lld", &t);
    while (t--)
    {
        scanf("%lld %lld", &n,&k);
        if (k == n) printf("1");
        else if(is_prime(n) == 0 || k == 1) printf("%lld\n",n);
        else 
        {
            for(i=k;i>1;i--)
            {
                if(n%i == 0) 
                {
                    printf("%lld\n",n/i);
                    break;
                }

            }
        }
    }
    
    
}