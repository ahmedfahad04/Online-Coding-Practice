#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count,n,i,x,k=0;

    for(;;)
    {   
        k++;
        count = 0;
        cin >> n;
        if(n == 0) break;
        else
        {
            for(i=0;i<n;i++)
            {
                cin >> x;
               if(x>=1 && x<=9) count++;
            }
            cout <<  "Case " << k <<": "<< count - (n-count) << endl;
        }
    }
}