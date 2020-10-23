#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    vector<int> a;
    int t,n,j,i,x,flag;
    cin >> t;
    while (t--)
    {
        flag = 1;
        cin >> n;
        for(i=0;i<n;i++)
        {
            cin >> x;
            a.push_back(x);
        }
        

        sort(a.begin(),a.end());

        for(i=0;i<a.size();i++)
        {
            if((a[i+1]-a[i]) == 1)
            {
                //cout << a[i+1]-a[i] << endl;
                a[i] = a[i+1] = 0;
            }
        }

        for(i=0;i<a.size();i++)
        {
            if(a[i+1]%2==a[i]%2)
            {
                a[i] = a[i+1] = 0;
            }
        }


        //for(i=0;i<n;i++)
        //cout << a[i] << " ";

        for(i=0;i<a.size();i++)
        {
            if(a[i] == 0)
            flag = 0;
            else
            {
                flag = 1;
                break;
            }
            

        }

        if(flag == 0) cout << "YES" << endl;
        else cout << "NO" <<endl;
        a.clear();
        
        
    }
    
}


