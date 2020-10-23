#include <stdio.h>
#include <string.h>

int main()
{
 char a[5]={'h','e','l','l','o'},b[150],c[50];
    int i,j,l,k;
    
    gets(b);
    
    l=strlen(b);
    
    for(i=0,j=0,k=0;j<l;j++)
    {
        if(b[j] == a[i])
        {
            c[k] = b[j];
            k++;
            i++;
            
            if(k==5) break;
        }
    }
   
   if(strcmp(c,"hello")==0) printf("YES");
    else printf("NO");
   
}
