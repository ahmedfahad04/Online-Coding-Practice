#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int n,b,a,m,x,y,k;
    cin >> n >> m >> a >> b;

    if(n>=m)
    {
        x=(n/m)*b;
        if(n%m != 0)
        {
           
            if((n%m)*a <= b) cout << x+(n%m)*a;
            else cout << x+b;
        }
        else
        {
            if(x<=n*a) cout << x;
            else cout << n*a;
        }
        
    }

    else if(n<m)
    {
       if(n*a<b) cout << n*a;
       else cout << b;
    }


}