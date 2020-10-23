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
	int i,j,s=0,d=0,n,x,y;
	vector<int> v;
	
	cin >> n; 	
	for(i=0;i<n;i++)
	{
		cin >> j;
		v.push_back(j);
	}
	
	x = 0;
	y = n-1;
	j  = 1;
	while(x!=y)
	{
		if(v[x]<v[y])
		{
			if(j&1) 
			{
				s+=v[y];
				y--;
				j++;	
			}	
			
			else{
				d += v[y];
				y--; 
				j++;
			}
		}
		else{
			if(j&1) 
			{
				s+=v[x];
				x++;
				j++;	
			}	
			
			else{
				d += v[x];
				x++;
				j++; 
			}
		}
		
		//cout << d << " " << s << " " << j << endl;
		
	} 
	
	if(j&1) s+= v[x];
	else d+= v[x];
	
	cout <<  s << " " << d;
}


