#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int a,b,n,i,count=0;
        cin >> a >>b >> n;

        for(;;)
        {
            if(a>=b)
            {
                b+=a;
                count++;
            }
            else {
                a+=b;
                count++;
            }

            if(a > n || b > n ) 
            {
                cout << count << endl;
                break; 
            }
        }
    }
}