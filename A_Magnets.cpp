
#include <bits/stdc++.h>
using namespace std;
int i,n,a,b,q=0;
main(){
	cin>>n;
	while(n--){
		cin>>a;
		if(a!=b)q++;
		b=a;
	}
	cout<<q;
}