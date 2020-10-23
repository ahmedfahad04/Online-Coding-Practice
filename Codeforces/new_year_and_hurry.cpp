#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,sum=0,i,t,tar;
    cin >> n >> t;

    t=240-t;

    for(i=1;i<=n;i++)
    {
        sum+=5*i;
        if(sum<t) continue;
        else if(sum == t) 
        {
            cout << i;
            break;
        }
        else{
            cout << i-1;
            break;
        }
    }

    if(i-1 == n) cout << i-1;
    
    
}