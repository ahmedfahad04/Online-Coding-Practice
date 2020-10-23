#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,c,d,n,i,t,w,x,y,z;
    scanf("%lld", &t);
    while(t--)
    {
        bool pos=0;
        cin >> n >> a >> b >> c >> d; 
        x = n*(a-b);
        y = n*(a+b);
        w = c-d;
        z = c+d;
        
        if(w<=y && z>=x) pos = 1;
        else pos = 0;
        puts(pos? "YES" : "NO");
        
    }
}