#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,n,m,k;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        k = n*m;
        if(k%2 == 0) cout << k/2 << endl;
        else cout << k/2 + 1 << endl;
 
    }
}