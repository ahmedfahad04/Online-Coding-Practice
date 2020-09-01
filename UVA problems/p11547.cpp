#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,n,i,j;
    cin >> t;

    while (t--)
    {
        cin >> n;
        j = ((((n*63)+7492)*235)/47)-498;
        j = j/10;
        i = j%10;
        cout << abs(i) << endl;
    }
}