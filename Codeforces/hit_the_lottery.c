#include <stdio.h>

int main()
{
    long long int i=0,j,num;
    scanf("%lld", &num);

    for(;;)
    {
        i++;
        if(num>=100) num -= 100;
        else if(num >= 20) num -= 20;
        else if(num >= 10) num -= 10;
        else if (num >= 5) num -= 5;
        else if (num >= 1) num -= 1;
        if(num == 0) break;
    }
    printf("%lld", i);
}