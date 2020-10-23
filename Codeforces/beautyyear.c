#include <stdio.h>
#include <string.h>

int main()
{
    char ch[4];
    int i,a,x;
    scanf("%d", &x);


    for(i=0;;i++)
    {
        a=x%10;
        printf("%d\t", a);
        x=x/10;
        if(x==1) break;
    }




    /*if(ch[0] == '1' && ch[1] == '9' &&ch[2] == '8' &&ch[3] == '7'){
                printf("2013");
                break;
        }
        else if*/
}
