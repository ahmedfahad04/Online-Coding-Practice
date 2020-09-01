#include <bits/stdc++.h>
#define MAX 19000007
using namespace std;

long long int i,j;

int prime(long long int n)
{
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i == 0) return 0;
    }
    return 1;
}

int main()
{
    int t;

    scanf("%lld", &t);
    while(t--)
    {
        long long int num;
        scanf("%lld", &num);

        if(num == 1) cout << "YES\n";
        else if(prime(num+1) == 1) cout << "NO\n";
        else if(prime(num + 1) == 0) cout<<"YES\n";
    }
}

/*
1. As test case is only 100, we can use just PRIMARILITY TEST fucntion
2. We should consider CASES INCLUDE 1
*/
