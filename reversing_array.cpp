#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void reverse(int r[],int s,int e){
   while(s<e){
       int temp=r[s];
       r[s]=r[e];
       r[e]=temp;
       s++;
       e--;   }


}
void printArray(int a[],int k){
	for(int i=0;i<k;i++)
      cout<<a[i]<<" ";
  	cout<<endl;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse(arr,0,n-1);
    printArray(arr,n);

    return 0;


}
 