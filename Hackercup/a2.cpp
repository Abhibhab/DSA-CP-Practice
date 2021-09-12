/*
 * Author    : HELLGOD13
 *
 */

#pragma GCC optimize("Ofast")
// #pragma GCC optimize("unroll-loops")
// #define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;



#define fio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fr(i, a, b) for(int i = (a); i < (b); ++i)
#define fb(i, b, a) for(int i = (b); i > (a); --i)
#define fill(x,y) memset(x,y,sizeof(x))
#define rr return
#define mp make_pair
#define pb push_back
#define sz(x) ((int)x.size())
// #define int long long
#define ll long long
#define ld long double
#define S second
#define F first
#define endl "\n"
#define nl "\n"
#define all(v) (v).begin(), (v).end()

void google(int t) {cout << "Case #" << t << ": ";}



vector<string> subString(string s, int n)
{
    vector<string>vec;

    for (int i = 0; i < n; i++)
        for (int len = 1; len <= n - i; len++)
            vec.pb( s.substr(i, len) );



    return vec;


}
  int x;
  string str;

void solve() {

  
    cin >> x;
    
    cin >> str;
    if (x == 1) {
        cout << 0 << nl;
    } else {
        int count = 0;
        vector<string>ans;
        ans = subString(str, x);
        for (string it : ans) {
            if(it.size()==0){
                continue;
            }else{


          
            string demo = "";
            fr(i, 0, it.size()) {
                if (it[i] != 'F') {
                    demo += it[i];
                }

            }
            // cout << demo << nl;


            fr(i, 1, demo.size()) {
                if (demo[i] != demo[i - 1]) {
                    count ++ ;                   
                }
            }
            
            }



        }

        cout << count %1000000007 << nl;





    }







}











signed main() {
    fio;
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//     freopen("error.txt", "w", stderr);
// #endif
    
   int t = 1;
    cin >> t; // UNCOMMENT FOR TEST-CASES
    fr(i, 1, t + 1) { google(i) ; solve(); } return 0;
}
