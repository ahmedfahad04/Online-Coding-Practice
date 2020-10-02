#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	int r,c,cnt=0;
	cin>>r>>c;

	char a[r+5][c+5];

	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			cin>>a[i][j];

		}
	}


	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			if(a[i][j] == '.')
			{
				if(a[i-1][j]!='*' && a[i][j-1]!='*' && a[i+1][j]!='*' && a[i][j+1]!='*')
				{
					//cout << "Position: "<<i<< " "<< j<<endl;
					cnt++;
				}
			}
			
		}
	}

	cout << cnt << endl;
}

