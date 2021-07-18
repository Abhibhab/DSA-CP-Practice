#include <iostream>
using namespace std;

int main()
{
	long long int t;
	cin>>t;
	
	while(t--)
	{
		long long int n;
		cin>>n;
		
		long int x=n%10;
		
		while(n>=10)
		{
			n=n/10;
		}
		cout<<x+n<<endl;
	}
}