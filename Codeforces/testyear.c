#include <stdio.h>
#include <string.h>

int count(char* str)
{
    int count = 0,appears,i,j;

    for(i=0; i<strlen(str);i++)
    {
        appears = 1;
        for(j=0;j,i;j++){
            if(str[j] == str[i]){
                appears = 1;
                break;
            }
        }
        if(!appears) count++;
    }
    return count;
}

int main()
{
    int x,a,i;
    char ch[10];

    scanf("%d", &x);

    for(i=0;i<4;i++)
    {
        a=x%10;
        ch[i] = a;
        x=x/10;
    }

    for(i=0;i<4;i++)
    {
        printf("%d", ch[i]);
    }
     int k=count(ch);

     printf("%d", k);

}


