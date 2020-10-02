#include <bits/stdc++.h>
using namespace std;

int main()
{
	int r,c,cnt=0;
	cin>>r>>c;
	char a[r+5][c+5];
	int b[r+5][c+5];
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			cin>>a[i][j];
			b[i][j]=1;
		}
	}
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			if(a[i][j]=='*')
			{
				b[i][j]=0;
				b[i-1][j]=0;
				b[i+1][j]=0;
				b[i][j-1]=0;
				b[i][j+1]=0;
			}
		}
	}
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			if(b[i][j]==1) cnt++;
		}
	}

	cout << "OUTPUT" << endl;
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			cout << b[i][j] ;
		}
		cout << endl;

	}

	cout<<cnt<<endl;
	return 0;
}

