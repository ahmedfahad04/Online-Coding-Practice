//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,sum=0;
    cin>>n>>m;
    char a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int p[m];
    for(int i=0;i<m;i++)
    {
        cin>>p[i];
    }
    for(int i=0;i<m;i++)
    {
        int s1=0,s2=0,s3=0,s4=0,s5=0;
        for(int j=0;j<n;j++)
        {
            if(a[j][i]=='A')
            {
                s1++;
            }
            else if(a[j][i]=='B')
            {
                s2++;
            }
            else if(a[j][i]=='C')
            {
                s3++;
            }
            else if(a[j][i]=='D')
            {
                s4++;
            }
            else if(a[j][i]=='E')
            {
                s5++;
            }
        }
        int max1=max(s1,max(s2,max(s3,max(s4,s5)))); // xoss idea
        sum+=p[i]*max1;

    }
    cout<<sum<<endl;
}

