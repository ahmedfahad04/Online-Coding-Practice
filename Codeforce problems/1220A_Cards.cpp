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
	long int n,i,j,m1=INT_MAX,m0=INT_MAX,z=0,e=0,r=0,o=0;
	map<char,long int> ch;
	cin >> n;
	string s;
	cin >> s;
	for(i=0;i<s.size();i++)
	{
		ch[s[i]]++;
		
	}
	
	if(ch['o']<ch['n']) {
		if(ch['o']<ch['e']) m1 = ch['o'];
	}
	else if(ch['n']<ch['e']) {
		if(ch['n']<ch['o']) m1 = ch['n'];
	}
	else m1 = ch['e'];
	
	z = (ch['z']<ch['e'])?ch['z']:ch['e'];
	o = (ch['r']<ch['o'])?ch['r']:ch['o'];
	m0 = (z<o)?z:o;
	
	
	//cout << m1 <<" " << m0 << endl;
	for(i=0;i<m1;i++)
	cout << 1 << " " ;
	
	for(i=0;i<m0;i++)
	cout << 0 << " " ;
	
}


