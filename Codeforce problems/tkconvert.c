#include <stdio.h>

int main()
{
    int i,x,y,z;
    float j;
    printf("Currency converstion from US Dollar to BDT\n");

    printf("Starting Value:");
    scanf("%d", &x);
    printf("Ending value:");
    scanf("%d", &y);
    printf("Increment:");
    scanf("%d", &z);




    i=x;
    if( x >= 0 && y != 0 && y > 0 ){
             printf("US Dollar\tBDT\n");
    do
   {
        j=(i*82.6);
        printf("%d\t\t%.2f", i, j);
        printf("\n");
        i=i+z;
    }
    while(i<=y);

    }
    else printf("Dimension error!");
}
