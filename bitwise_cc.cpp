#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll getpow(ll a , ll b){

 ll result=1;

  while (b!=0){
      result*=a;
      --b;     
 }  
 return result;
};

int main() {
    int test;
    cin>>test;
    while(test--){
    ll n,m;
    cin>>n>>m;
    
    if(n==1){
          cout<<1<<endl;
    }else{
        int poi;
       
        ll a=((getpow(2,n))-1);
          
        ll ans=getpow(a,m);

        cout<<ans%mod<<endl;
    }

        //2 to the [power]n-1 tp the power m
    }


    return 0;
}
