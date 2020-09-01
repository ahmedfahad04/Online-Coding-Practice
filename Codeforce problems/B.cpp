#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main()
{

    int t;
    cin >> t;

    while(t--)
    {
        int a,b,x,y,flag=0;
        cin >> a >> b;

        if((abs(a-1)==0 && abs(b-2) == 0) || (abs(a-2) == 0 && abs(b-1) == 0) ) flag = 1;
        else if(a == 0 && b == 0) flag = 0;

        else if((abs(b-1)/abs(a-2) == 2) || (abs(a-1)/abs(b-2) == 2)) flag = 1;
        else flag = 0;

        if(flag == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}