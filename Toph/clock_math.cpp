#include <bits/stdc++.h>
#include <iomanip>
#define ll long long
using namespace std;

int main()
{
	int hour,min,i,j;
	double ans;
	
	cin >> hour >> min;
	
	ans = (60*hour-11*min)/2.0;
	
	if(ans>180) printf("%lf",abs(360-ans));
	else printf("%lf", abs(ans));
}

/* Basic definition
#include<bits/stdc++.h>

using namespace std;

int main()
{
    double hour, minute, cell, angle_1, angle_2;

    scanf("%lf %lf", &hour, &minute);

    angle_1 = (hour*5.0) + (minute/12.0);
    angle_1 *= 6.00;

    angle_2 = (minute*6.00);

    cell = fabs(angle_1 - angle_2);

    cell = min(cell, (360-cell));

    printf("%0.4lf\n", cell);

    return 0;
}

*/
