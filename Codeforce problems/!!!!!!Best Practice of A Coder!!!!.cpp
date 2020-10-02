#include<bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp> //required
#include <ext/pb_ds/tree_policy.hpp> //required

using namespace __gnu_pbds;
using namespace std;

template <typename T> using ordered_set =  tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// find_by_order(k)  returns iterator to kth element starting from 0;
// order_of_key(k) returns count of elements strictly smaller than k;
typedef long long  ll;
typedef vector<ll> VL;
typedef vector<int> VI;
typedef pair<ll,ll> PLL;
typedef pair<int,int> PII;

#define rep(i, a, b) for (ll i = a; i < b; i++)
#define per(i, a, b) for (ll i = a - 1; i >= b; --i)
 
#define endl "\n"
#define pb push_back
#define pf push_front
 
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
 
#define sorta(v) sort(all(v))
#define sortd(v) sort(rall(v))
#define vld vector<ld>
 
#define debug if (1)
#define log(val) debug {clog << "\n" << #val << ": " << val << "\n";}
 
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
#define mod (ll)(1e9 + 7)
#define inf (mod * mod)
const int miod=1000000007;
ll gcd(ll a,ll b) // gcd finder
{
	return b?gcd(b,a%b):a;
}
ll power(ll a,ll b) //binary exponent
{
	ll ans=1;
	while(b!=0)
	{
		if(b&1)
		{
			ans*=a;
		}
		a=a*a;
		b>>=1;
	}
	return ans;
}
ll powerm(ll a,ll b) //binary exponent for long long
{
	ll ans=1;
	while(b!=0)
	{
		if(b&1)
		{
			ans*=a;
			ans%=mod;
		}
		a=a*a;
		a%=mod;
		b>>=1;
	}
	return ans%mod;
}

// string to integer stoi()
// string to long long stoll()
// string.substr(position,length);
// integer to string to_string();

void solve()
{
	
}
int main() // driver program
{
	IOS;
	#ifndef ONLINE_JUDGE
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
	#endif
	ll t=1;
	//cin>>t;
	while(t--)
	{
		//cout<<"Case #"<<pp-t<<":\n";
		solve();
	}
	return 0;
}
/* stuff you should look for before submission:
        * int overflow, array bounds
        * special cases (n=0,1?)
        * do smth instead of nothing and stay organized
        * open, ending chekcing
        * check for equal values


recursion - matrix exponential


// BITMASK:
// 1)When some constrall is of the order of 15-20, think of bitmask DP.
// 2)When some constrall is around 40, try out meet in the middle
// 3) See Strings,palindromes,prefix,suffix etc -> KMP,Z algorithm
*/
