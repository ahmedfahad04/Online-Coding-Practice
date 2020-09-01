#include <bits/stdc++.h>
using namespace std;

//int binsearch(vector<int> &a,int l,int r,int x)
//{
//	int mid;
//	while(l<=r)
//	{
//		mid = (r+l)/2;
//		if(a[mid] == x) {
//			return (mid+1);
//		}
//		else if(a[mid] < x) l = mid + 1;
//		else r = mid - 1;
//	}
//	return 0;
//}

int main()
{
	long int t;
	cin >> t;
	
	while(t--)
	{
		long long int n,i,j,sum=0;
		cin >> n;
		
		if(n%9 == 0)
		cout << (((n/9)*10) + (n%9))-1 << endl;
		else
		cout << ((n/9)*10)+(n%9) << endl;
		
		//cout << sum << endl;
	}
}


