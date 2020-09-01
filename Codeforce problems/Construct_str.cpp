#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int t,n,a,b,i,j,x[3000];
    char ch='a';
    cin >> t;

    while(t--)
    {
        ch = 'a';
        cin >> n >> a >> b;
        if(a == b)
        {
            for(i=0;i<n;i++)
            { cout << (char)ch;
            ch++;
            }
        
        }
        else if(n ==a && b==1)
        {
            for(i=0;i<n;i++)
            cout << (char)ch;
        }
        else
        {
            for(i=0;i<b;i++)
            {
                x[i] = (char)ch;
                ch++;
            }

            for(;i<a;i++)
            x[i] = (char)ch-1;

            for (j = 0; j < i;j++)
            {
                cout << (char)x[j];
            }
            
            for(i=0;i<(n-a);i++)
            {
                cout << (char)x[i];
            }

        }
        cout << endl;
        
    }
}