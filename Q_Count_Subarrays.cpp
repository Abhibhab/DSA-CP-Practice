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
int countNonIncreasing(int arr[], int n)
{
    // Initialize result
    int cnt = 0;
 
    // Initialize length of current non
    // increasing subarray
    int len = 1;
 
    // Traverse through the array
    for (int i = 0; i < n - 1; ++i) {
 
        // If arr[i+1] is less than or equal to arr[i],
        // then increment length
        if (arr[i + 1] >= arr[i])
            len++;
 
        // Else Update count and reset length
        else {
            cnt += (((len + 1) * len) / 2);
            len = 1;
        }
    }
 
    // If last length is more than 1
    if (len > 1)
        cnt += (((len + 1) * len) / 2);
 
    return cnt;
}

void solve()
{
    int x;
    cin>>x;
    int arr[x];
    f(i,0,x){
        cin>>arr[i];
    }
    int ans;
     (x==1)?cout<<"1"<<endl : cout<<countNonIncreasing(arr,x)<<endl;
    
    
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}
