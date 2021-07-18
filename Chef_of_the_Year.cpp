/* 
#############################################
Author: hellgod_13
#############################################
*/
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
#define INF INT_MAX
#define ll long long
#define int long long
#define vi vector<int>
#define pii pair<int, int>
#define ld long double
#define PB push_back
#define MP make_pair
#define FF first
#define SS second
#define f(i,a,b) for(int i=a;i<b;i++)
#define rf(i,a,b) for(int i=a;i>=b;i--)
#define max(a, b) (             \
    {                           \
        __typeof__(a) _a = (a); \
        __typeof__(b) _b = (b); \
        _a > _b ? _a : _b;      \
    })
#define min(a, b) (             \
    {                           \
        __typeof__(a) _a = (a); \
        __typeof__(b) _b = (b); \
        _a < _b ? _a : _b;      \
    })
//////////////////////////////////////////////////////////////////////////////
int power(int a, int b)
{
    int res = 1ll;
    while (b > 0)
    {
        if (b % 2ll)
            res = (res * a) % MOD;
        a = (a * a) % MOD;
        b /= 2ll;
    }
    return res;
}
int GCD(int a, int b)
{
    if (b == 0)
        return a;
    return GCD(b, a % b);
}
int fact(int n)
{
    int res = 1;
    for (int i = 2; i <= n; i++)
    {
        res = (res * i) % MOD;
    }
    return res % MOD;
}
bool comp(pair<string, int> a, pair<string, int> b)
{
    if (a.second != b.second)
        return a.second > b.second;
    return a.first < b.first;
}
//////////////////////////////////////////////////////////////////////////////

void solve()
{
    int chefs,votes;
    cin>>chefs>>votes;
    map<string,string>chef_country;
    for(int i=0;i<chefs;i++){
        string name,country;
        cin>>name>>country;
        chef_country[name]=country;
    }
    map<string,int>chef_votes;
    map<string,int>country_votes;
    for(int i=0;i<votes;i++){
        string name;
        cin>>name;
        chef_votes[name]++;
        string name_country=chef_country[name];
        chef_country[name_country]++;

    }
    int maxi=0;
    str ans_chef="";

   for(auto it:chef_votes){
       if(maxi<it.second){
           maxi=it.second;
           ans_chef=it.first;

       }  

   }
   int mpxa=0;
   str ans_country="";
   for(auto it:country_votes){
       if(mpxa<it.second){
           mpxa=it.second;
           ans_country=it.first;

       }

   }
   cout<<ans_chef<<endl;
   cout<<ans_country<<endl;

    
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tc = 1;
    //cin >> tc;
    while (tc--)
    {
        solve();
    }
}
