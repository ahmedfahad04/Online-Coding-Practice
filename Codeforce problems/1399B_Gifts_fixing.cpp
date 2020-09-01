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
#define pb push_back

#define F first
#define S second
#define SZ(a) int((a).size())
#define ALL(a) a.begin(),a.end()
#define fr(i,x,y) for(int i=x;i<y;i++)
#define frr(i,x,y) for(int i=x-1;i>=y;i--)
#define inf 1e18+1
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define dis(k) cout << k << endl
#define in(k) cin >> k ;
const int mod=1000000007;
ll gcd(ll a,ll b)
{
	return b?gcd(b,a%b):a;
}
ll power(ll a,ll b)
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

//		cout << "A is: " << a << endl;
//		cout << "B is: " << b << endl;
//		cout << "Answer is: " << ans << endl;

	}
	return ans;
}
ll powerm(ll a,ll b)
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
//	cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";

int main()
{
	IOS;
	int t;
	cin >> t;
	
	while(t--)
	{
		long long int n,i,j,m1=INT_MAX,m2 = INT_MAX, s=0;
		cin >> n;
		
		vector<long long int> a,b;
		
		for(i=0;i<n;i++) 	
		{
			cin >> j;
			m1 = min(m1,j);
			a.push_back(j);
		}
		
		for(i=0;i<n;i++) 	
		{
			cin >> j;
			m2 = min(m2,j);
			b.push_back(j);
		}
		
		for(i=0;i<n;i++)
		{
			a[i] = abs(a[i]-m1);
			b[i] = abs(b[i]-m2);
		}
		
		for(i=0;i<n;i++)
		{
			if(a[i] == 0) s+= b[i];
			else if(b[i] == 0) s+=a[i];
			else if(a[i]>=b[i]) s+= a[i];
			else if(b[i]>a[i]) s+= b[i];
			
		}
		
		cout << s << endl;
		
		
		
	}
















}

