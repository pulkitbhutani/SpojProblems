#include <iostream>
using namespace std;

int main()
{
	int t,n,s;
	cin>>t;
	for(int k=1;k<=t;k++)
	{
		cin>>s>>n;
		int a[n],temp , ptr,sum=0,count=0;
		for(int i =1;i<=n;i++)
		{
			cin>>a[i];
		}
		a[0]=0;
		for(int p=2;p<=n;p++)
        	{
                	temp = a[p];
                	ptr = p-1;
                	while(temp<a[ptr])
                	{
                        	a[ptr+1]=a[ptr];
                        	ptr--;
               	 	}
               		a[ptr+1]=temp;
       		 }
		for(int j=n;j>=1;j--)
		{
			sum = sum + a[j];
			count++;
			if(sum>=s)
			{
				cout<<"scenario #"<<k<<":"<<endl;
				cout<<count<<endl;
				cout<<"\n"
				break;
			}
			else if(count ==n)
			{
				cout<<"scenario #"<<k<<":"<<endl;
				cout<<"impossible"<<endl;
			}
		}
	}
	return 0;
}
