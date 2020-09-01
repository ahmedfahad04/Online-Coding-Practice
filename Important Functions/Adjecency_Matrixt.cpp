#include <bits/stdc++.h>
using namespace std;

bool a[1010][1010];
void initialize()
{
	int i,j;
	for(i=0; i<1010; i++)
	{
		for(j=0; j<1010; j++)
		{
			a[i][j] = false;
		}
	}
}

int main()
{
	int x,y,ed,nod,i,j;
	cin >> nod >> ed;

	for(i=0; i<ed; i++)
	{
		cin >> x >> y;
		a[x][y] = true;
	}
	int q;
	cin >> q;
	while(q--)
	{
		int c,b;
		cin >> c >> b;

		if(a[c][b] == 1) cout << "YES" << endl;
		else cout << "NO" << endl;
		
	}


}
