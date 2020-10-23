#include <stdio.h>

int main()
{
    long long int a,b,c,s,t;
    scanf("%lld",&t);
    

    while (t--)
    {
        scanf("%lld %lld %lld %lld", &s,&a,&b,&c);
        if(s/c >= a)
        {
            printf("%lld\n",(((s/c)/a)*b)+(s/c));
        }
        else if(s/c < a)
        {
            printf("%lld\n", s/c);
        }
        
        
    }
    
    
}