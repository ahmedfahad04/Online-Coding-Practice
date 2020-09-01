#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int count,n,i,x,k=0,count2=0;

    for(;;)
    {   
        k++;
        count = 0;
        count2 = 0;
        cin >> n;
        if(n == 0) break;
        else
        {
            for(i=0;i<n;i++)
            {
                cin >> x;
               if(x==0) count++;
               else count2++;
            }
            cout <<  "Case " << k <<": "<<count2-count<< endl;
        }
    }
}