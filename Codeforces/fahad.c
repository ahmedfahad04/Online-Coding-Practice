#include <stdio.h>

int main()
{
    int x,*y;
    x = 15;
    y = &x;
    printf("Value of x is: %d", *y);
}