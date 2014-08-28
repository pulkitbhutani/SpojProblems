#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		long long int k;
		k = 192 + (n-1)*250;
		cout<<k<<"\n";
	}
}
