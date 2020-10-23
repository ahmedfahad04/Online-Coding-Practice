#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a[6],i,n,x,t;

    cin>>t;

    while(t--){
        for(i=0;i<3;i++)
        cin>>a[i];

        cin>>n;

        sort(a,a+3, greater<int>());

        x = 2*a[0]-a[1]-a[2];
        if(n<x) cout<<"NO"<<endl;
        else if ((n-x)%3 == 0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    

    
    
}