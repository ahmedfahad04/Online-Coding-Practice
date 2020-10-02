// CPP program to illustrate memset
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,i,j,ka,mka,t,k;
	vector<string> v;
	string s;
	cin >> n;
	for(i=0; i<n; i++)
	{
		cin >> s;
		v.push_back(s);
		ka = s.size()-1;
		//cout << ka << endl;
		mka= max(mka,ka);
	}

	if(mka%2 == 0) mka = mka+1;
	//cout << "MAX: " << v.size();

	for(i = 0; i<v.size(); i++)
	{
		if(v[i].size() == 2)
		{
			t = mka - (v[i].size()+1);
			if(t != 0)
			{
				for(k = 0; k<t/2; k++) cout << " ";
			}
			cout << v[i] << 'a' << endl;
		}
		else
		{
			if(v[i].size()%2 == 0)
			{
				t = mka - (v[i].size()-1);

				if(t != 0)
				{
					for(k = 0; k<t/2; k++) cout << " ";
				}

				for(j=0; j<v[i].size()-1; j++)// string
				{
					cout << v[i][j];
				}
				cout << endl;
			}
			else
			{
				t = mka - v[i].size();
				if(t != 0)
				{
					for(k = 0; k<t/2; k++) cout << " ";
				}
				cout << v[i] << endl;
			}
		}

	}


}

/* stuff you should look for before submission:
        * int overflow, array bounds
        * special cases (n=0,1?)
        * do smth instead of nothing and stay organized
        * open, ending chekcing
        * check for equal values
*/
