#include <bits/stdc++.h>
using namespace std;
int main(){
	int cnt=0;
	string s,p,t;
	cin>>s;
	for(int k=0;k<s.size();k++){
		p+=tolower(s[k]);t+=toupper(s[k]);
		if(t[k]==s[k])cnt++;
	}
	
	if(cnt>s.size()/2)cout<<t;
	else cout<<p;
}