#include <bits/stdc++.h>
using namespace std;



int coco(int r[]){
    int a;
    int b;
    int total;
    a=r[2]/r[0];
    b=r[3]/r[1];
    total=a+b;
    return total;

}
int main() {
  
    int test=1;
    cin>>test;
    while(test--) 
    {
        int arr[4];
        for(int i=0;i<4;i++){
         cin>>arr[i];
                 }
    cout<<coco(arr)<<endl;
        
    }
    return 0;
}
