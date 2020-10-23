#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s1,s2;
		char ch;
		cin >> s1 >> s2;

		int cnt=0,i;
		map<char,int> mp1,mp2;

		for(i=0; i<s1.size(); i++)
			mp1[s1[i]]++;

		for(i=0; i<s2.size(); i++)
			mp2[s2[i]]++;

		for(ch = 'a'; ch<='z'; ch++)
		{
			cnt += abs(mp1[ch]-mp2[ch]);
			//	cout << ch <<" " <<mp1[ch] <<  " " << mp2[ch] << endl;
		}

		cout << cnt << endl;
	}

}
