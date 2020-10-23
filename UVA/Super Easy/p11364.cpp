#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,max,t,n,x,min;
    cin >> t;
    
    while(t--)
    {
        max = 0;
        min = 200;
        cin >> n;
        for(i=0;i<n;i++)
        {
            cin >> x;
            if(max < x) max = x;
            if(min > x) min = x;
        }

        cout << (max-min)*2 << endl;
        
    }

}