#pragma GCC optimize("O3,unroll-loops")
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace chrono;
using namespace __gnu_pbds;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define endl "\n"
#define nl "\n"
int max(int a, int b) {if (a > b) return a; else return b;}
int min(int a, int b) {if (a > b) return b; else return a;}
#define fr(i, a, b) for(int i = (a); i < (b); ++i)
#define fb(i, b, a) for(int i = (b); i > (a); --i)
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
string abc = "abcdefghijklmnopqrstuvwxyz";
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
            res = (res * a) % MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }
    return res;
}
#ifdef ONLINE_JUDGE
#define debug(x) cerr << #x<<" "; _print(x); cerr << endl;
#else
#define debug(x);
#endif
typedef long long ll;
// typedef long long int;
typedef unsigned long long ull;
typedef long double lld;
typedef __int128 ell;
typedef tree<pair<ll, ll>, null_type, less<pair<ll, ll>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
void _print(pbds v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
/*---------------------------------------------------------------------------------------------------------------------------*/
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
void extendgcd(ll a, ll b, ll*v) {if (b == 0) {v[0] = 1; v[1] = 0; v[2] = a; return ;} extendgcd(b, a % b, v); ll x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return;} //pass an arry of size1 3
ll mminv(ll a, ll b) {ll arr[3]; extendgcd(a, b, arr); return arr[0];} //for non prime b
ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}
bool revsort(ll a, ll b) {return a > b;}
ll combination(ll n, ll r, ll m, ll *fact, ll *ifact) {ll val1 = fact[n]; ll val2 = ifact[n - r]; ll val3 = ifact[r]; return (((val1 * val2) % m) * val3) % m;}
void google(int t) {cout << "Case #" << t << ": ";}
vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m
ll phin(ll n) {ll number = n; if (n % 2 == 0) {number /= 2; while (n % 2 == 0) n /= 2;} for (ll i = 3; i <= sqrt(n); i += 2) {if (n % i == 0) {while (n % i == 0)n /= i; number = (number / i * (i - 1));}} if (n > 1)number = (number / n * (n - 1)) ; return number;} //O(sqrt(N))
ll getRandomNumber(ll l, ll r) {return uniform_int_distribution<ll>(l, r)(rng);}
/*--------------------------------------------------------------------------------------------------------------------------*/









void solve() {
    map<int, int>mp;
    int xo;
    cin >> xo;

    for (int i = 0; i < xo; i++) {
        int x;
        cin >> x;
        mp[x]++;
    }
    // if (mp.size() == xo) {
    //     cout << 1 << nl;
    //     return;
    // }
    if (mp.size() == 1) {
        if (xo % 2 == 0) {
            cout << xo / 2 << nl;
        } else {
            cout << (xo / 2) + 1 << nl;
        }
        return;
    }



    map<int, int>mp2;
    for (auto it : mp) {
        mp2[it.second]++;
    }
    // cout << mp2.end()->second << nl;
    if (mp2.rbegin()->second > 1) {
        cout << mp2.rbegin()->first << nl;
        // cout << "HELLo" << nl;
    } else {
        int maxi = INT_MIN;
        for (auto it : mp) {
            maxi = max(maxi, it.second);
        }
        int ans = 0;
        // cout << maxi << nl;
        if (maxi % 2 == 0) {
            ans = maxi / 2;
            for (auto it : mp) {
                if (it.second > ans && it.second != maxi) {
                    ans = it.second;
                }
            }
        } else {
            ans = (maxi / 2) + 1;
            for (auto it : mp) {
                if (it.second > ans && it.second != maxi) {
                    ans = it.second;
                }
            }

        }
        cout << ans << nl;
        // cout << "hi" << nl;




        // if (maxi % 2 == 0) {
        //     cout << maxi / 2;
        // } else {
        //     cout << (maxi / 2) + 1;
        // }


        // cout << nl;

    }



    // int maxi = INT_MIN;
    // for (auto it : mp) {
    //     maxi = max(maxi, it.second);

    // }
    // if (maxi % 2 == 0) {
    //     cout << maxi / 2;
    // } else {
    //     cout << (maxi / 2) + 1;
    // }


    // cout << nl;






}








int main() {
#ifdef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
    fastio();
    auto start1 = high_resolution_clock::now();
    int t;
    cin >> t;
    for (int i = 1; i < t + 1; i++) {
        // google(i);
        solve();
    }
    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef ONLINE_JUDGE
    cerr << "Time: " << duration . count() / 1000 << endl;
#endif
}
