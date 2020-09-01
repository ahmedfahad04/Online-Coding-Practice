#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j,x;
    vector<int > a,b;
   
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> x;
        a.push_back(x);
    }

    cin >> m;
    for(i=0;i<m;i++)
    {
        cin >> x;
        b.push_back(x);
    }

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    cout << a[n-1] << " " << b[m-1];


}