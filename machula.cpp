#include <iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

int main()
{
	int t;
	char str1[100],opr[2],str2[100],opr1[2],str3[100];
	cin>>t;
	cout<<"\n";
	while(t--)
	{
	cin>>str1>>opr>>str2>>opr1>>str3;
		if((strchr(str1,'m'))!=NULL)
		{
			int x= atoi(str3);
			int y= atoi(str2);
			int z = x-y;
			cout<<z<<"+"<<y<<"="<<x<<"\n\n";
		}
		else if((strchr(str2,'m'))!=NULL)
		{
			int x = atoi(str1);
			int y = atoi(str3);
			int z = y-x;
			cout<<x<<"+"<<z<<"="<<y<<"\n\n";
		}
		else if((strchr(str3,'m'))!=NULL)
		{
			int x = atoi(str1);
			int y = atoi(str2);
			int z = x+y;
			cout<<x<<"+"<<y<<"="<<z<<"\n\n";
		}
	}
	return 0;
}
