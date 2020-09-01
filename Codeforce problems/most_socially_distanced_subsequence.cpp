#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long int n,i,j,data[2000],ev=0,odd=0,count=0;
        
        cin >> n;

        for(i=0;i<n;i++)
        {
            cin >> data[i];
            if(data[i]&1) odd++;
            else ev++;
        }
        
        if(odd == ev && n%2 == 0)
        {
            for(i=0;i<n;i+=2)
            {
                if(data[i]%2 == 0) count++;
            }
            cout << abs(count-ev) << endl;

        }
        else if(n%2 != 0 && ev==(odd+1))
        {
            for(i=0;i<n;i+=2)
            {
                if(data[i]%2 == 0) count++;
            }
            cout << abs(count-ev) << endl;

        }
        else cout << -1  << endl;
       
     
        
    }

}