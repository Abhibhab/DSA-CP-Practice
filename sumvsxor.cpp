#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main() {
    ll n;
    cin>>n;
    ll sum;
    ll xorr;
    ll count=0;


    for (ll i=0;i<=n;i++){
        sum=n+i;
        xorr=n^i;
        if(xorr==sum){
            count++;
        }
        

       
       
    }
    cout<<count<<endl;
   

   
    return 0;
}
