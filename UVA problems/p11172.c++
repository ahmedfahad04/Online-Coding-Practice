#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,n,m,j;
    cin >> t;

    while(t--)
    {
        cin >> n >> m;
        if(n>m) cout << ">" << endl;
        else if (n<m) cout << "<" << endl;
        else cout << "=" << endl;
    }

}