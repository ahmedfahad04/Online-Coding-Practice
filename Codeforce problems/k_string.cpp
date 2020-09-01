#include <bits/stdc++.h>
#include <vector>
#include <string.h>

using namespace std;


int main()
{
    char a[1010],ch[1010],temp;
    int i,j,k=0,l,p,n,count[26]={0},flag=0;

    scanf("%d", &n);
    getchar();
    gets(ch);
    l = strlen(ch);

    for(j=l;j>0;j--)
        for(i = 0;i <(j-1);i++)
    {
        if(ch[i]>ch[i+1])
        {
            temp = ch[i];
            ch[i] = ch[i+1];
            ch[i+1] = temp;
        }

    }


    for(i=0;i<l;i=j)
        for(j=(i+1); j<(l+1); j++)
    {
        if(ch[i] == ch[j])
            continue;
        else{
            a[k] = ch[i];
            k++;
            break;
        }
    }
    a[k] = ch[i];

    p =strlen(a);
  
    for(i=0,j=0;ch[i] != 0,j<k;i++)
    {
        if(ch[i] == a[j])
        {
            count[j]++;            
        }
        else
        {
            j++;
            i--;
        }

    }

    for(i=0;i<k;i++)
    {
        if(count[i]%2 != 0 ) 
        {
            cout << "-1";
            return 0;
        }
    }

    for(j=0;j<)
    for(i=0;i<k;i++)
    cout << a[i];




   
    

}
    
    
