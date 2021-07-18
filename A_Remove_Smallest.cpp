#include<bits/stdc++.h>
using namespace std;
 
int main()
{	
	int t;
	cin>>t;
	while(t--)
	{int n,ok=1;
		cin>>n;
		int a[n+1];
		for(int i=0;i<n;i++)cin>>a[i];
		sort(a,a+n);
		for(int i=1;i<n;i++)if(a[i]-a[i-1]>1)
		{ok=0;break;}
		
		puts(ok?"YES":"NO");
		
		}
	
}