/* Distinct Character identification using 1D string. It can be used for both Strings and digits*/

#include <stdio.h>
#include <string.h>
int length();

int main()
{
  int t;
  scanf("%d",&t);
  getchar();
  while(t--)
  {
    char ch[5000],count[5000];
    int i,j=0,k;
    gets(ch);
/*
    for(i=0;i<strlen(ch);i++)
    {
      if(ch[i] != ch[i+1]) {
        count[j] = ch[i];
        j++;
      }

    }
    */

   for(i=0;i<strlen(ch);i+=2)
   {
     count[j] = ch[i];
     j++;
   }

   count[j] = ch[strlen(ch)-1];
    
    for(i=0;i<=j;i++)
    printf("%c",count[i]);
    
    printf("\n");


  }
}
