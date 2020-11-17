#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll par(ll a[],ll n)
{
    ll res=0;
    ll bit[32]={0};
    for(ll i=0;i<n;i++){
        ll pos=log2(a[i]);
        bit[pos]++;
    }
    for(ll i=0;i<32;i++){
        res+=(bit[i]*(bit[i]-1))/2;
    }
    return res;
}
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,i;
        cin>>n;
        ll a[n];
        for(i=0;i<n;i++) cin>>a[i];
        cout<<par(a,n)<<endl;
    }

}
   	  	  					  	    	 	  	  		
