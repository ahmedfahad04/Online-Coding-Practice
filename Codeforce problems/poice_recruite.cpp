#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a[100010],i,j=0,count=0,n;
    cin >> n;

    for(i=0;i<n;i++)
    cin >> a[i];

    for(i=0;i<n;i++)
    {
        if(a[i] != -1) count+=a[i],a[i]=0;
        else if(a[i] == -1) 
        {
            if(count != 0) count--,a[i]=0;
        }
    }


    count = 0;
    for(i=0;i<n;i++)
    if(a[i] == -1) count++;

    /*for(i=0;i<n;i++)
    cout << a[i] << " ";*/

    cout << count;
}