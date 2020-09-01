#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    FILE *s,*re;
    s=fopen("name.txt","r");
    re=fopen("output.txt","w");
    fprintf(re,"Name\tRoll\t\tCSE101\t\tCSE102\t\tMATH104\t\tGE105\t\tSE106\t\tSTAT103\t\tCGPA\n");
    fclose(re);
    re=fopen("output.txt","a");
    if(ferror(s)||ferror(re))
    {
        printf("Error reading file");
        exit(1);
    }
   
    char name[80],roll[80],c1[80],c2[80],m[80],g[80],se[80],st[80];
    int num[6]={},i=0;
    float cg[6]={};
    fscanf(s, "%*[^\n]\n");
    while(!feof(s))
    {
        fscanf(s,"%s %s %s %s %s %s %s %s",name,roll,c1,c2,m,g,se,st);
        fprintf(re,"%s\t%s\t\t",name,roll);
        num[0]=atoi(c1),num[1]=atoi(c2),num[2]=atoi(m),num[3]=atoi(g),num[4]=atoi(se),num[5]=atoi(st);
        while(i<6)
        {
            if(num[i]>=80)
            {
                fprintf(re,"4.00/A+\t\t");
                cg[i]=4.00;
            }
            else if(num[i]>=75&&num[i]<80)
            {
                fprintf(re,"3.75/A\t\t");
                cg[i]=3.75;
            }
            else if(num[i]>=70&&num[i]<75)
            {
                fprintf(re,"3.50/A-\t\t");
                cg[i]=3.50;
            }
            else if(num[i]>=65&&num[i]<70)
            {
                fprintf(re,"3.25/B+\t\t");
                cg[i]=3.25;
            }
            else if(num[i]>=60&&num[i]<65)
            {
                fprintf(re,"3.00/B\t\t");
                cg[i]=3.00;
            }
            else if(num[i]>=55&&num[i]<60)
            {
                fprintf(re,"2.75/B-\t\t");
                cg[i]=2.75;
            }
            else if(num[i]>=50&&num[i]<55)
            {
                fprintf(re,"2.50/C+\t\t");
                cg[i]=2.50;
            }
            else if(num[i]>=45&&num[i]<50)
            {
                fprintf(re,"2.25/C\t\t");
                cg[i]=2.25;
            }
            else if(num[i]>=40&&num[i]<45)
            {
                fprintf(re,"2.00/D\t\t");
                cg[i]=2.00;
            }
            else
            {
                fprintf(re,"0.00/Fail\t");
                cg[i]=0.00;
            }
            i++;
        }
        if(num[0]<40||num[1]<40||num[2]<40||num[3]<40||num[4]<40||num[5]<40)
        {
            fprintf(re,"Fail");
        }
        else
        {
            fprintf(re,"%.2f",(cg[0]+cg[1]+cg[2]+cg[3]+cg[4]+cg[5])/6);
        }
        fprintf(re,"\n");
        i=0;
    }
}
