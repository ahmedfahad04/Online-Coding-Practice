#include<stdio.h>
int main( ){
 char ch;
 long int total=1;
 while(scanf("%c", &ch) != EOF){
 
    if(ch == '"' && total % 2 == 1){ 
    printf("``");
    total++;
    }
    else if(ch == '"' && total % 2 == 0){
    printf("''");
    total++;
    }

    else
    printf("%c", ch);
         
 }
 return 0;
}

//Accepted