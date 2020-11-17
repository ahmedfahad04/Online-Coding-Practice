#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mod 10000007
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n,k,i,j,m,sum=0;
        vector<ll> v;
        cin >> n >> k;
        for(i=0;i<n*k;i++)
        {
            cin >> j;
            v.pb(j);
        }
        sort(v.rbegin(),v.rend());
        m = ceil(n/2);


        for(j=m,i=0;i<k;j+=m+1,i++){
               // cout << v[j] <<" **" << j<<endl;
            sum+=v[j] ;
        }


        cout << sum << endl;

    }

}
