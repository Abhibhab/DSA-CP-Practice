#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main() {
    int min , max;
    cin>>min;
    cin>>max;
    int ans;
    int maxi=INT_MIN;
    for (int i=min;i<=max;i++){
        for (int j=min;j<=max;j++){
            ans=i^j;
            maxi=std::max(maxi,ans);
        }
    }
    cout<<maxi<<endl;

    
    return 0;
}
