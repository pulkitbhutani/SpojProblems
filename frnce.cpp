#include <iostream>
#include<math.h>
#include <iomanip>
using namespace std;

int main()
{
	while(1)
	{
	int l;
	cin>>l;
	if(l==0)
	{
		break;
	}
	else
	{
		float pi = 3.1415926,a,r,b;
		r = l/pi;
		a = (pi*r*r)/2;
		cout<<setprecision(2)<<fixed<<a<<"\n";
	}
	}
	return 0;
}
