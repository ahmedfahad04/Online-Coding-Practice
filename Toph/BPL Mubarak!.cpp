#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{

	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;

		int ball=0,i,j;

		for(i=0; i<s.size(); i++)
		{
			if(s[i] == 'N' || s[i] == 'W' || s[i] == 'D' )continue;
			else ball++;
		}

		if(ball == 1 ) cout << "1 BALL";
		else if(ball >1 && ball <6) cout << ball << " BALLS";
		else if(ball == 6) cout << "1 OVER";
		else if(ball == 7)cout << "1" << " OVER " << "1 BALL";
		else if(ball >7 && ball <12) cout << "1" << " OVER " << ball%6 << " BALLS";
		else if(ball%6==0 && ball > 11) cout << ball/6 << " OVERS";
		else if(ball%6!=0 && ball > 11)
		{
			if(ball %6 == 1) cout << ball/6 << " OVERS " <<"1 BALL";
			else cout << ball/6 << " OVERS " << ball%6 << " BALLS";
		}


		cout << endl;
	}

}
