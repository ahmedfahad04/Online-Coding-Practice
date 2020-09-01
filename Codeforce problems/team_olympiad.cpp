#include <bits/stdc++.h>
#include <vector>
using namespace std;


int main()
{
    int i,t,j,x[6000],m,n;
    vector<int> a,b,c;

    cin>>t;

    for(i=0;i<t;i++)
    cin>>x[i];

    for(i=0;i<t;i++)
    {
        if(x[i] == 1)
        {
            a.push_back(i+1);
        } 
        else if(x[i] == 2) 
        {
            b.push_back(i+1);
        }
        else if(x[i] == 3)
        {
           c.push_back(i+1);

        } 
    }
    /*
    cout<<"Total size is:"<<a.size()<<endl;
    cout<<"Total size is:"<<b.size()<<endl;
    cout<<"Total size is:"<<c.size()<<endl;
*/

    m = (a.size()<b.size())?a.size():b.size();
    n = (m<c.size())?m:c.size();

    cout << n << endl;

    if (n == 0) return 0;
    else{
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" "<<b[i]<<" "<<c[i]<<endl;
    }
    }
}