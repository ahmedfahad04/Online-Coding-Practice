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
	int t;
	cin >> t;
	while(t--)
	{
		int a[60][60],i,j,k,r,c,rs[60]={},cs[60]={},ans=0;
		cin >> r >> c;
		
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				cin>> a[i][j];
				if(a[i][j] == 1) rs[i]++;
			}
		}
		
		for(i=0;i<c;i++)
		{
			for(j=0;j<r;j++)
			{
				if(a[j][i] == 1) cs[i]++;
			}
		}
		
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				if(rs[i] == 0 && cs[j] == 0){
					ans++;
					rs[i]++;
					cs[j]++;
				} 
			}
		}
		
		if(ans&1) cout << "Ashish" << endl;
		else cout << "Vivek" << endl;
		
		
	}
	
}


