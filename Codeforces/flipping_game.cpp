#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,j,meh=0,msf=0,c1=0;
	vector<int> v;
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> j;
		if(j) {
			c1++;
			v.push_back(-1);
		}
		else v.push_back(1);
	}
	
	for(i=0;i<n;i++)
	{
		meh = meh + v[i]; // meh = max ends here; msf = max so far
		if(meh < v[i]) meh = v[i];
		if(msf < meh) msf = meh;
	}
	
	if(n == c1) cout << n-1;
	else cout << c1+msf;
}

/* Algo description and steps

Theme: It mainly finds out the largest sum subsequence ##

# Steps:
data:  1 -1 1 1 -1
index: 0  1 2 3  4

meh = 1
meh = v[0] so unchanged
msf(0) < meh  so msf = 1;

meh = 1+(-1) = 0
meh > v[1] so unchanged
msf(1) > meh so unchanged

meh = 0+1 = 1
meh = v[2] so unchanged
msf(1) = meh so unchaged

meh = 1+1 = 2
meh > v[3] so unchaged
msf(1) < meh so msf = 2

meh = 2-1 = 1
meh = v[4] so unchanged
msf(2) > meh so unchanged

result: 2

*/


 


