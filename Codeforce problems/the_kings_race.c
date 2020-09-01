#include <stdio.h>

int main()
{
    long long int a,b,x,y,n,c,d;
    scanf("%lld %lld %lld",&n,&x,&y);

    a = n-x;
    b = n-y;
    c = x-1;
    d = y-1;

    x = (a>b)?a:b;
    y = (c>d)?c:d;

    //printf("\n%lld %lld", x,y);
    
    
    if((a == 0 && b == 0)) printf("Black");
    else if((c == 0 && d == 0)) printf("White");
    else if(x<y) printf("Black");
    else if(x>y || x==y) printf("White");

}