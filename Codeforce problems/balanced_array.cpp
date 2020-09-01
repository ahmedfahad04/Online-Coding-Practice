#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n,d,i,x;
        cin >> n;

        n=n/2;

        if((n)&1) cout << "NO" << endl;
        else
        {

            cout << "YES" << endl;
            x=2;
            for(i=0;i<n;i++)
            {
                cout << x << " " ;
                x+=2;
            }

            x=1;
            for(i=0;i<n-1;i++)
            {
                cout << x << " " ;
                x+=2;
            }
            cout << x+n << endl;


        }
    }
}
