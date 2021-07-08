#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

 void right_rotate_one(int arr[],int n ){
        int temp=arr[n-1];
        for(int i=n-2;i>=0;i--){
            arr[i+1]=arr[i];
        }
        arr[0]=temp;
        
            }
            void right_rotate(int arr[],int d, int n){
                for(int i =0;i<d;i++){
                    right_rotate_one(arr,n);
                }
            }
            void print_array(int arr[],int n){
                for (int i=0;i<n;i++){
                    cout<<arr[i]<<" ";
                }
            }

int main() {
    int test;
    cin>>test;
    while(test--){
        int n ;
        int d;
        cin>>n>>d;
        int array[n];
        for(int i=0;i<n;i++){
            cin>>array[i];
        }
        right_rotate(array,d,n);
        print_array(array,n);
    

    }


   

    
    return 0;
}
