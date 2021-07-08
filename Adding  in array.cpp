#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007


int summation(int r[],int n){
    int total;
    for (int i=0;i<n;i++){
        total+=r[i];
            }
            return total;
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    
 
 cout<<summation(arr,n)<<endl;

    
    return 0;
}

