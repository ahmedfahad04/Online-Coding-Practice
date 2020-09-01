#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,t,a[2000],i,j,k=0,flag = 0;
    cin >> t;

    while(t--)
    {
         flag = 0;
         k = 0;
        cin >> n >> x;
        
        for(i=0;i<n;i++)
        cin >> a[i];

        for(i=0;i<n;i++)
        {
            if(a[i] % 2 != 0)
            {       
                //cout << "**";
                flag = 1;
                if(x-1 == 0)
                {
                    flag = 1;
                    break;
                }
                else
                {
                    for(j = 0;j<n;j++)
                    {
                       
                        if(a[j]%2 == 0)
                        {
                             //cout << "##";
                             k++;
                        } 
                        if(k == x-1)
                        {
                            //cout << "if(1)";
                            flag = 1;
                            break;
                        }

                    }

                    if(k != x-1)
                    {
                        //cout << "if(2)";
                        flag = 0;
                        break;
                    }
                    else {
                        flag = 1;
                        break;
                    }

                }
               

            }
           
           
            
        }

        if (flag == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
       

    }
}