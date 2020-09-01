#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int x,i,l=0,j,k=0,n,a[1010],flag=0;
   
    cin >> n;

    for(i=0;i<n;i++)
    cin >> a[i];

    for(j=1;j<n;j++)
    {
        for(i=0;i<j;i++)
        {
            if(a[j]>a[i]) flag = 1;
            else{
                flag=0;
                break;
            }

        }
        if(flag == 1) k++;
    }

    flag = 0;

    for(j=1;j<n;j++)
    {
        for(i=0;i<j;i++)
        {
            if(a[j]<a[i]) flag = 1;
            else
            {
                flag = 0;
                break;
            }
            
        }
        if(flag == 1) l++;
    }


    cout << k+l;

}