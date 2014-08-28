#include <iostream>
using namespace std;

int main()
{
		int t;
		cin>>t;
		while(t--)
		{
			char arr[40];
			int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,n;
			cin>>n;
			for(int i=0;i<40;i++)
			{
				 cin>>arr[i];
			}
			for(int i =0;i<40;i++)
			{
				
				if(arr[i]=='T' && arr[i+1] =='T' && arr[i+2]=='T')
				{
					a++;
					
				}
				if(arr[i]=='T' && arr[i+1] =='T' && arr[i+2]=='H')
				{
					b++;
					
				}
				if(arr[i]=='T' && arr[i+1] =='H' && arr[i+2]=='T')
				{
					c++;
					
				}
				if(arr[i]=='T' && arr[i+1] =='H' && arr[i+2]=='H')
				{
					d++;
					
				}
				if(arr[i]=='H' && arr[i+1] =='T' && arr[i+2]=='T')
				{
					e++;
					
				}
				if(arr[i]=='H' && arr[i+1] =='T' && arr[i+2]=='H')
				{
					f++;
					
				}
				if(arr[i]=='H' && arr[i+1] =='H' && arr[i+2]=='T')
				{
					g++;
					
				}
				if(arr[i]=='H' && arr[i+1] =='H' && arr[i+2]=='H')
				{
					h++;
					
				}
			}
			cout<<n<<" "<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<g<<" "<<h<<endl;
		}
		return 0;
}
