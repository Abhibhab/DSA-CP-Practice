/*
 * Author    : HELLGOD13
 *
 */

#pragma GCC optimize("Ofast")
// #pragma GCC optimize("unroll-loops")
// #define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;

#define fio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fr(i, a, b) for(int i = (a); i < (b); ++i)
#define fb(i, b, a) for(int i = (b); i > (a); --i)
#define fill(x,y) memset(x,y,sizeof(x))
#define rr return
#define mp make_pair
#define pb push_back
#define sz(x) ((int)x.size())
#define int long long
#define ll long long
#define ld long double
#define S second
#define F first
#define endl "\n"
#define nl "\n"
#define all(v) (v).begin(), (v).end()
typedef pair<int, int> pii;
int max(int a, int b) {if (a > b) return a; else return b;}
int min(int a, int b) {if (a > b) return b; else return a;}
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}

inline int lcm(int a, int b) { return a / gcd(a, b) * b;}
inline int normalize(int x, int mod) { x %= mod; if (x < 0) x += mod; return x;}

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
string abc = "abcdefghijklmnopqrstuvwxyz";
const double PI = acosl(-1);
const int mod = 1000 * 1000 * 1000 + 7;
//const int mod = 998244353;
const int inf = 1e18 + 5;

//a and b are assumed to be taken modulo p
inline int add(int a, int b, int p = mod) { int c = a + b; if (c >= p) c -= p; return c; } // expects c doesn't exceeds 2p
inline int sub(int a, int b, int p = mod) { int c = a - b; if (c < 0) c += p; return c; } // ...
inline int mul(int a, int b, int p = mod) { return (a * 1LL * b) % p; } // ...

// template<typename T>
// using ordered_set = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;
//1. order_of_key(k) : number of elements strictly lesser than k
//2. find_by_order(k) : k-th element in the set
//To make it an ordered_multiset, use pairs of (value, time_of_insertion)
//to distinguish values which are similar.

int floor1(int n, int k) {
    if (n % k == 0 || n >= 0)return n / k;
    return (n / k) - 1;
}

int ceil1(int n, int k) {
    return floor1(n + k - 1, k);
}

int powm(int a, int b) {
    int res = 1;
    while (b) {
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}
/*---------------------------------------------------------------------------------------------------------------------------*/
#ifndef ONLINE_JUDGE
#define debug(x) cout << #x << " " << x <<endl;
#endif
ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
void extendgcd(ll a, ll b, ll*v) {if (b == 0) {v[0] = 1; v[1] = 0; v[2] = a; return ;} extendgcd(b, a % b, v); ll x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return;} //pass an arry of size1 3
ll mminv(ll a, ll b) {ll arr[3]; extendgcd(a, b, arr); return arr[0];} //for non prime b
ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}
bool revsort(ll a, ll b) {return a > b;}
void swap(int &x, int &y) {int temp = x; x = y; y = temp;}
ll combination(ll n, ll r, ll m, ll *fact, ll *ifact) {ll val1 = fact[n]; ll val2 = ifact[n - r]; ll val3 = ifact[r]; return (((val1 * val2) % m) * val3) % m;}
void google(int t) {cout << "Case #" << t << ": ";}
vector<int> sieve(int n) {int*arr = new int[n + 1](); vector<int> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m
ll phin(ll n) {ll number = n; if (n % 2 == 0) {number /= 2; while (n % 2 == 0)n /= 2;} for (ll i = 3; i <= sqrt(n); i += 2) {if (n % i == 0) {while (n % i == 0)n /= i; number = (number / i * (i - 1));}} if (n > 1)number = (number / n * (n - 1)) ; return number;} //O(sqrt(N))
/*--------------------------------------------------------------------------------------------------------------------------*/



void precompute() {



}




void solve() {
    int n, s, y;
    cin >> n >> s;
    y = s / ((n / 2) + 1);
    cout << y << endl;
}






signed main() {
    fio;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
    cout << fixed << setprecision(10);
    precompute(); int t = 1;
    cin >> t; // UNCOMMENT FOR TEST-CASES
    fr(i, 1, t + 1) {/*google(i) ;*/ solve(); } return 0;
}
