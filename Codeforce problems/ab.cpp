#include <bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif


    long long unsigned int a,b,t,x,i,count,flag=0;
    cin >> t;

    while(t--)
    {
        
        flag = 0;
        cin >> a >> b;

        if(a<b) swap(a,b);
        if(a%b != 0 ) cout << -1 << endl;
        
        else
        {
            count = 0;
            x = a/b;
            
            while(x%8 == 0) x/=8,count++;
            while(x%4 == 0) x/=4,count++;
            while(x%2 == 0) x/=2,count++;

            if(x != 1) cout << -1 << endl;
            else cout << count << endl;
        }
       
    }

}