#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long int n,x,i,k,sum=0,front=0,back=0,flag=0;
        vector <int> a;
        cin >> n >> x;

        for(i=0;i<n;i++)
        {
            cin >> k;
            a.push_back(k);
            sum+=k;
        }

        if(sum%x != 0) cout << n << endl;
        else
        {
            for(i=0;i<n;i++)
            {
                front += a[i];
                back += a[n-i-1];
                if((sum - front)%x !=0 || (sum-back)%x != 0) 
                {
                    flag=1;
                    break;
                }
                
            }
            if(flag == 1) cout << n-i-1 << endl;
            else cout << -1 << endl;
            
        }
        

        
    }
    
}