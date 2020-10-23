#include<stdio.h>
#include<string.h>

int Count(char* str);
int main()
{
    char ch[100];
    int x,i,k,j,flag = 0;
    scanf("%d", &x);
    getchar();
    j=x+1;


    for(;;){

    if(flag == 0) {
            for(i=0;i<4;i++)
    {
        k=j%10;
        ch[i]=k;
        j=j/10;
    }

    for(j=4;j>0;j--){
        for(i=0;i<j;i++){
            if(ch[i] == ch[i+1]){
                x++;
                flag = 0;
                break;
            }
            else flag = 1;

        }
    }

    }
    else if(flag == 1){
        printf("%d", x);
        return 0;
    }

}






}










int Count(char* str){
    int count = 0,appears;

    for (int i = 0; i < strlen(str); i++){
         appears = 0;
         for (int j = 0; j < i; j++){
              if (str[j] == str[i]){
                  appears = 1;
                  break;
              }
         }

         if (!appears){
             count++;
         }
    }

    return count;
}
