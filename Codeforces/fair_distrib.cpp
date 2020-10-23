#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,i,k;
    cin>>x>>y;
    //cout<<x<<y;

    if(y%x==0) cout<<"0";
    else{
        k = y+1;
        
        for(;;k++)
        {
            if(k%x == 0)
            {
                cout<<(k-y);
                return 0;

            } 
            else continue;
            
        }
    }
}