#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int k,n,y,a,b,i,x;
    
    for(;;)
    {
        
        cin >> n ; 
        
        if(n == 0) break;
       
        else{
            cin >> x >> y;
            for(i=0;i<n;i++)
            {

            cin >> a >> b;
            if(x-a == 0 || y-b == 0 || (x-a == 0 && y-b == 0)) cout << "divisa" << endl;
            else if(x<a && y<b) cout << "NE" <<endl;
            else if(x<a && y>b) cout << "SE" <<endl;
            else if(x>a && y<b) cout << "NO" <<endl;
            else if(x>a && y>b) cout << "SO" <<endl;

            }

        }
  
    

    }

    

}