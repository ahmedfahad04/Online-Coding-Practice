#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int n,i=0,j;
    cin >> n;

    for(j=1;j<n;j++)
    {
        if(n%j == 0)i++;
    }

    cout << i ;

}