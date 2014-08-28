#include <iostream>
using namespace std;

int main()
{
	while(1)
	{
	int n,count=0;
	cin>>n;
	if(n==0)
	{
	break;
	}
	else
	{
	int p[n],invp[n];
	for(int i=0;i<n;i++)
	{
		cin>>p[i];
		invp[p[i]-1]= i+1;
	}
	for(int i =0;i<n;i++)
	{
		if(invp[i]==p[i])
			count++;
	}
	if(count ==n)
		cout<<"ambiguous"<<endl;
	else
		cout<<"not ambiguous"<<endl;
	}

	}
	return 0;
}
