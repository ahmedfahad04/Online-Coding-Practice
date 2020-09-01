#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int x;
        cin >> x;

        if(x%2 == 0) cout << x/2 << endl;
        else cout << (x-1)/2 << endl;

    }
}
