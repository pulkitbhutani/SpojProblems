#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,w;
		cin>>n>>w;
		if(w==0)
		{
			cout<<"Airborne wins."<<endl;
		}
		else
		{
			cout<<"Pagfloyd wins."<<endl;
		}
	}
}
