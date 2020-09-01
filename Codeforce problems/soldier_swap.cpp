#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n,m,x,y,count = 0,max1=0,max2=0,t,r,c;
    char d;
    cin >> t;

    while(t--)
    {
        cin >> n >> m >> x >> y;
    
    
    
    for(r = n;r>0;r--)
    {
        count=0;
        for(c = 0;c<m;c++)
        {
            cin >> d;           
            if(d == '.')
            count++;
        
        if(count >= 2 && count%2 == 0) max1+= count/2;
        else{
            if(count <= 1) max1 += count;
            else
            {max1+=count/2;
            max2++;}
        }
        }
       

    }
    cout << max1 <<"//" << endl;
    cout << max2 <<"//" << endl;


    if(x<=y/2) cout << max1*x << endl;
    else{
        cout << max1*y+max2*x << endl;
    }

    max1 = max2  = 0;
    }

    //printf("\n%d\n",count);

}