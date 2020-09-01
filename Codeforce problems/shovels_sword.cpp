#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long int a,b;
        cin >> a >> b;
        if(a == 0 || b == 0) cout << "0" << endl;
        else if (a <= b/2 ) cout << a << endl;
        else if (b <= a/2 ) cout << b << endl;
        else
        {
            cout << (a+b)/3 << endl;
        }
        
       
    }
}