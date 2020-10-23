#include <stdio.h>
#include <string.h>

int main()
{
    char ch[1010];
    int i,m=0,n;

    scanf("%d", &n);
    for(i=0;i<n;i++)
        scanf("%s", &ch[i]);
    getchar();





    for(i=0;i<n;i++)
    {
        if(n==1){
        if(ch[i] == '1') {
        printf("YES");
        return 0;
        }
        else{
        printf("NO");
        return 0;
        }
    }
         else if(n>1){
                if(ch[i] == '0') m++;
   }

    }

    if(m == 1)
    printf("YES");
    else printf("NO");

}
