#include <iostream>
using namespace std;

int rev(int n){
    int reversed = 0;
    while(n > 0){
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    return reversed;
}

int main(){
    int n;
    cin >> n;
    while(n--){
        int k;
        cin >> k;
        int reversed = rev(k);
        cout << reversed << endl;
    }
}