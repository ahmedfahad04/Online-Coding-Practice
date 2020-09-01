#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char name[50],num[50];

    for (i = 0; i<2; i++)
    {
        scanf("%s %s", &name[i], &num[i]);
        getchar();
        printf("Name is %s and Num is %s\n", name[i],num[i]);
    }
    
}