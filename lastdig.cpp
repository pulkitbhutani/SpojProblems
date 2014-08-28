#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a,b,x=1;
		cin>>a>>b;
		if (a==0 && b==0)
		{
			x=0;
		}
		else
		{
		for(int i=0;i<b;i++)
		{
			x=x*a;
		}
		}
		cout<<x%10<<endl;
	}
	return 0;
}
