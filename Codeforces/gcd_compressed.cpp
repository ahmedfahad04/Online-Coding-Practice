#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n,x,i;
        vector <int> ev,odd;
        cin >> n;

        for(i=0;i<2*n;i++)
        {
            cin >> x;
            if(x&1) odd.push_back(i+1);
            else ev.push_back(i+1);
        }
       
        int k=n-1;

        if(n==2)
        {
            if(odd.size()>= ev.size()) cout << odd[0] << " "<< odd[1] << endl;
            else cout << ev[0] << " " <<ev[1] << endl;
        }
        else
        {
            if(odd.size()==ev.size()) 
            {
                for(i=0;i<k;i++)
                {
                    cout << odd[i] << " ";
                    if((i+1)%2 == 0) cout << endl;
                }

                

                 for(i=0;i<k;i++)
                {
                    cout << ev[i] << " ";
                    if((i+1)%2 == 0) cout << endl;
                }

            }

            else if(odd.size()>ev.size()) 
            {

                if(odd.size()>=k*2)
                {
                    for(i=0;i<k;i++)
                    {
                        cout << odd[i] << " ";
                        if((i+1)%2 == 0) cout << endl;
                    }

                    

                    for(;i<k+k;i++)
                    {
                        cout << odd[i] << " ";
                        if((i+1)%2 == 0) cout << endl;
                    }

                    

                }
                else
                {
                    for(i=0;i<k;i++)
                    {
                        cout << odd[i] << " ";
                        if((i+1)%2 == 0) cout << endl;
                    }

                    

                    for(i=0;i<k;i++)
                    {
                        cout << ev[i] << " ";
                        if((i+1)%2 == 0) cout << endl;
                    }

                    

                }
                

            }

            else if(odd.size()<ev.size()) 
            {

                if(ev.size()>=k*2)
                {
                    for(i=0;i<k;i++)
                    {
                        cout << ev[i] << " ";
                        if((i+1)%2 == 0) cout << endl;
                    }

                    

                    for(;i<k+k;i++)
                    {
                        cout << ev[i] << " ";
                        if((i+1)%2 == 0) cout << endl;
                    }


                }
                else
                {
                    for(i=0;i<k;i++)
                    {
                        cout << ev[i] << " ";
                        if((i+1)%2 == 0) cout << endl;
                    }

                

                    for(i=0;i<k;i++)
                    {
                        cout << odd[i] << " ";
                        if((i+1)%2 == 0) cout << endl;
                    }

                   
                }
                

            }

        }
   
    }

}