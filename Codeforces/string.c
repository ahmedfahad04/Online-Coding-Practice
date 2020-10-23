#include <stdio.h>
#include <string.h>

char low(char x[]);

int main()
{
    char a[100];
    int i,k;
    printf("Enter your string: ");
  gets(a);
    k = strlen(a);

   /*for( i = 0; i < strlen(a); i++ ){
        if(a[i] == '\0')
        {break;}
        else if( a[i] == 'A' || a[i] == 'E'|| a[i] == 'I'|| a[i] == 'O' || a[i] == 'U' || a[i] == 'a'|| a[i] == 'u' || a[i] == 'i' || a[i] == 'e'|| a[i] == 'o' ){
               continue;
        }*/
        /*else if( a[i] >= 'A' && a[i] <= 'Z') {*/


            for (i = 0; i < k; i++){

        if( a[i] >= 'A' && a[i] <= 'Z'){
            printf("%c", low(a[i]));}
        else{
                printf("%c",a[i]);
            }
            }
       /* }
        else {
            printf(".%s", a[i]);
        }
    }*/


}

char low(char x[])
{
    int i;
    while(x[i] != '\0'){
        if (x[i] >= 'A' && x[i] <= 'Z'){
            x[i] = x[i] + 32;
        }
        i++;
    }
}
