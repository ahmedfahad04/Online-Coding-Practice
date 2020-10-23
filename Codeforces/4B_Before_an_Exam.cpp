#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 10000007
using namespace std;


int main()
{
	int d,y,z,ls=0,rs=0,total,i,j,k=1;
	vector<int> l,r;
	cin >> d >> total;
	
	for(i=0;i<d;i++)
	{
		cin >> j >> k;
		l.pb(j), ls+=j;
		
		r.pb(k), rs+=k;
	}
	
	if(ls == total) {
		cout << "YES\n";
		for(auto a: l) cout << a << " ";
	}
	else if(rs == total){
		cout << "YES\n";
		for(auto a: r) cout << a << " ";
	}
	else if(ls>total || rs < total) cout << "NO\n";
	
	else{
		while(1) 
		{
			y = rs-total;
	
			if(y>=d){
				z = y/d;
				rs = 0;
				for(i=0;i<d;i++)
				{
					if((r[i]-z)>=l[i]) r[i] = r[i]-z;
					rs+=r[i];
				}

				if(rs == total) {
					cout << "YES\n";
					for(auto a: r) cout << a << " ";
					
					break;
				}
			}
			
			else{
				
				rs=0;
				for(i=0;i<d;i++){
					if((r[i]-1)>=l[i] && y!=0) r[i] = r[i]-1, y--;
					rs+=r[i];
				
				}

				if(rs == total) {
					cout << "YES\n";
					for(auto a: r) cout << a << " ";
					
					break;
				}
				
				
			}
		}
	}
	
}


