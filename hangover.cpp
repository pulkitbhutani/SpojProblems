#include <iostream>
using namespace std;

int main()
{

	float c,sum=0;
	int i,j,k;
	while(1)
	{
		cin>>c;
		if(c==0.00) break;
		sum = 0;
		i =2;
	while(1)
	{
			sum = sum+(float)1/(i);
			if(sum>=c) break;
			++i;
	}
	cout<<i-1<<" card(s)\n";
	}
return 0;
}
