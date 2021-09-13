#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int a, Z, b, count = 0;
    cin >> a>> Z;
    priority_queue<int> powers;
    for (int i = 0; i < a; i++)
    {
        cin >> b;
        powers.push(b);

    }
     while(Z>0 && powers.top()!=0){
         int sakti=powers.top();
         powers.pop();
         Z-=sakti;
         powers.push(sakti/2);
         count ++;

     }
     if(Z<=0){
         cout<<count<<endl;

     }else{
         cout<<"Evaluate"<<endl;
     }
}
int main()
{

    ll test = 1;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}
