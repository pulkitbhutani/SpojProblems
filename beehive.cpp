#include <iostream>
using namespace std;

int main()
{
	int n,sum=0,count=0;
	cin>>n;
	for(int i =0; i<1000; i++)
	{
		sum = sum+ 6*i;
		count++;
		if(n==sum+1)
		{
			cout<<"Y"<<endl;
			break;
		}
		else if(count ==1000)
		{
			cout<<"N"<<endl;
		}
	}
}
