#include <bits/stdc++.h>
using namespace std;

int main()
{
      
        char str[110][110],hi[110];
        int i,j,n,m,count=0;

        cin >> n >> m;

        for(i=0;i<n;i++)
        for(j=0;j<m;j++)
        cin >> str[i][j];

        for(j=0;j<m;j++)
        {
            hi[j] = 0;
            for(i=0;i<n;i++)
            {
                if(str[i][j]>hi[j]) hi[j] = str[i][j];
            }
        }

      
        for(i=0;i<n;i++)
        for(j=0;j<m;j++)
        {
            if(str[i][j] == hi[j])
            {
                count++;
                break;
            }
        }

        printf("%d\n", count);


    
}