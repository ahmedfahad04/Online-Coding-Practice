#include<stdio.h>
#include<string.h>

int main(void){
    char sort[150],n[150],a[150];
    int i,j,t,k=0,l;



    gets(sort);
    l = strlen(sort);
    if(sort[1] == '}') printf("0");
    else{

    for(i=l;i>0;i-=3){
        for(j=1;j<(l-1);j+=3){
            if(sort[j]>sort[j+3]){
                t=sort[j];
                sort[j]=sort[j+3];
                sort[j+3]=t;
            }
        }
    }
    n[0] = sort[1];

    for(i=0;i<strlen(sort);i+=3)
    {

      if(n[0] != sort[i+4])  {
        n[0] = sort[i+4];
      k++;
      }
    }


    printf("%d", k);

    }
}
