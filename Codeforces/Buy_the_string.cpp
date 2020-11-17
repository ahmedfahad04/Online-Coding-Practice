#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 10000007
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n,c1,c2,h,zero=0,one=0,i,j,k;
        cin >> n >> c1 >> c2 >> h;
        string s;
        cin >> s;
        for(i=0;i<s.size();i++)
        {
            if(s[i] == '0') zero++;
            else one++;
        }

        if(zero == one){
            if(c1 <= c2){
                j = c1*n+h*(n/2);
                k = c1*(n/2)+c2*(n/2);
                if(j<=k) cout << j << endl;
                else cout << k << endl;
            }
            else{
                j = c2*n+h*(n/2);
                k = c1*(n/2)+c2*(n/2);
                if(j<=k) cout << j << endl;
                else cout << k << endl;
            }
        }
        else{
            j = c1*zero+c2*one;

            if(c1<=c2) k = c1*n+(n-zero)*h;
            else k = c2*n+(n-one)*h;

            if(j<=k) cout << j << endl;
            else cout << k << endl;

        }


    }

}
