#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int maxAndXor(int arr[], int n)
{
    int ans = INT_MAX;
 
    // Sort the array
    sort(arr, arr + n);
 
    // Traverse the array arr[]
    for (int i = 0; i < n - 1; i++) {
 
        // Compare and Find the minimum
        // XOR value of an array.
        ans = min(ans, arr[i] ^ arr[i + 1]);
    }
 
    // Return the final answer
    return ans;
}

int main()
{

    ll test = 1;
    cin >> test;
    while (test--)
    {
        
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
      

        cout << maxAndXor(arr,n) << endl;
    }

    return 0;
}
