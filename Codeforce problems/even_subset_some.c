#include <stdio.h>

int main()
{
    int n,flag,i,a[200],b[200],k=0,t,j;
    scanf("%d", &t);

    while (t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d", &a[i]);
        }

        flag = 0; 

     
            
            for(i=0;i<n;i++)
            {
                if(a[i]%2 == 0)
                {
                    printf("1\n%d\n",i+1);
                    flag = 1;
                    break;
                    
                }
            }

            if (flag == 0)
            {
                if(n==1) printf("-1\n");

                else if (n >= 2)
                {
                    printf("2\n");
                for(i=0;i<2;i++)
                {
                printf("%d ", i+1);
                
                }

                }
                
            }
        
        
    
        

    }
    

}