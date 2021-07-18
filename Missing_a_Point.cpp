#include <iostream>
#include<cstring>
#include<algorithm>
#include<vector>
#include<utility>
#include<set>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <stack>
#include<math.h>
#include <stdlib.h>     /* atoi */
#include <iomanip>      /* setprecision */
#include<climits>       // INT_MAX
using namespace std;

#define space cout<<'\n'
#define ll long long int
#define pb push_back
#define mp make_pair
#define infor(a,n) for(__typeof (n) i=0; i<n; i++) {cin>>a[i];}
#define outfor(a,n) for(__typeof (n) i=0; i<n; i++) {cout<<a[i]<<' ';}
#define jfori(n) for(__typeof (n) i=0; i<n; i++)     //just for
#define jforj(n) for(__typeof (n) j=0; j<n; j++)     //just for
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vi vector<int>
#define vll vector<ll>
#define vpi vector<pair<int,int>>
#define vpll vector<pair<ll,ll>>
#define seti set<int>
#define setll set<ll>
#define mi map<int,int>
#define mll map<ll,ll>
#define uomi unordered_map<int,int>
#define uomll unordered_map<ll,ll>

#define modulo 1000000007
#define stp(z,value) cout<<setprecision(z)<<value

ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}


int main() {
    IOS;

int t;
cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x=0,y=0;
        jfori(4*n - 1){
            int a;
            cin>>a;
            x^=a;
            cin>>a;
            y^=a;
        }
        cout<<x<<" "<<y<<endl;
    }


    return 0;


}