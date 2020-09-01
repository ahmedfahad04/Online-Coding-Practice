#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    
    int k,n,a[2010],i,j,count=0;
    scanf("%d %d", &n,&k);

    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
        a[i] += k;
        if(a[i] <= 5) count++; 
    }

    printf("%d", count/3);    


}