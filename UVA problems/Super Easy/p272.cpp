#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

	char ch;
	int i;
	int k=1;
	while(scanf("%c",&ch)!=EOF)
	{
		if(ch=='"')
		{
			if(k&1)
			{
				cout << "``" ;
				k++;
			}
			else
			{
				cout << "''" ;
				k++;
			}
		}

		else cout << ch;

	}

	return 0;
}
