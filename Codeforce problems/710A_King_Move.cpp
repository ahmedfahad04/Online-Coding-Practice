#include <bits/stdc++.h>
using namespace std;


int main()
{
	string ch;
	cin >> ch;
	
	if((ch[0] == 'a' && (ch[1] == '1' || ch[1] == '8')) || (ch[0] == 'h' && (ch[1] == '1' || ch[1] == '8')))cout << 3;
	else if((( ch[0] >= 'b' && ch[0] <='g') && (ch[1] == '1' || ch[1] == '8')) || 
	((ch[0] == 'a' && (ch[1] >= '2' && ch[1] <= '7')) || (ch[0] == 'h' && (ch[1] >= '2' && ch[1] <= '7')) ))cout << 5;
	else cout << 8;
}

//
//#include<bits/stdc++.h>
//using namespace std;
//#define test int t;cin>>t;while(t--)
//void fastcode()
//{
//    /*
//    cout<<fixed<<setprecision(2);
//    p = 3.141592653;
//    itoa to convert any system itoa(n,bin,2)
//    */
//    
//    std::ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//}
//
//int main()
//{
//    /*freopen(" ","r",stdin);
//    freopen(" ","w",stdout);*/
//    fastcode();
//    char a;
//    int b;
//    cin>>a>>b;
//    if(a=='a'||a=='h')
//    {
//        if(b==1||b==8)
//        {
//            cout<<3;
//        }
//        else 
//        {
//            cout<<5;
//        }
//    }
//    else
//    {
//        if(b==1||b==8)
//        {
//            cout<<5;
//        }
//        else 
//        {
//            cout<<8;
//        }
//    }
//    return 0;
//}

