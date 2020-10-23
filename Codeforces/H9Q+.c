#include <stdio.h>
#include <string.h>

int main()
{
    char a[150],ch[150];
    int i,j,l;

    gets(ch);

    l=strlen(ch);

    for(i=0;i<l;i++)
    {
        if(ch[i] == 'H' || ch[i] == 'Q' ||ch[i] == '9' )
        {
            printf("YES");
            return 0;
        }
    }
    printf("NO");
}
