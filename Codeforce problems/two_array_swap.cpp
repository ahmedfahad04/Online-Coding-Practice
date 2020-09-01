#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    int a[300],b[300],t,m,n,k,i,j,sum1=0,sum2=0;
    cin >> t;

    while (t--)
    {
        cin >> n >> k;
        for(i=0;i<n;i++)
        {
            cin >> a[i];
            sum1 += a[i];
        }

        for(i=0;i<n;i++)
        {
            cin >> b[i];
            sum2 += b[i];
        }

        
        if (k == 0) cout << sum1 << endl;
        else{
            sum1 = 0;
            sum2 = 0;
            sort(a,a+n, greater<int>());
            sort(b,b+n, greater<int>());

            for(i=0;i<k;)
            {
                //cout << b[i] << "**" <<endl;
                if(b[i]>a[n-i-1])
                {swap(a[n-i-1],b[i]);
                i++;}
                else break;
                
            }

            
            for(i=0;i<n;i++)
            {
                sum1 = sum1 + a[i];
            }

            cout<<sum1<<endl;
           
        }
        sum1 = 0;
        sum2 = 0;
        
        
    }
    
}

