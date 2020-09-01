#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,a[3],i,k=0;
    cin >> t;

    while(t--)
    {
        k++;
        for(i=0;i<3;i++)
        cin >> a[i];

        sort(a,a+3);
        cout << "Case " << k <<": " << a[1] << endl;
    }

}