#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,m,t;
  
  cin >> t;

while(t--)
{
    vector<int> a,b;
    int i,j,count,k,flag = 0;

    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> m;
        a.push_back(m);
       
    } 

    sort(a.begin(),a.end());

    for(count = 1;count<=1024;count++)
    {
        for(i=0;i<n;i++)
        {
            k = a[i]^count;
            b.push_back(k);
        
        }

        sort(b.begin(), b.end());
        
        if(a == b) 
        {
            flag = 1;
            break;
        }
        else if (a!=b)
        {
            b.clear();
            flag = 0;
             continue;
        }

    }

    if(flag == 1) cout << count << endl;
    else cout << -1 << endl;
    
    
}

}