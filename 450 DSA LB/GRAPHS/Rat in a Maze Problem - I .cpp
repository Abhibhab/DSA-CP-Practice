// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++


#define pb push_back
#define long long ll
class Solution{
    public:
    void ratmaze(vector<vector<int>> &m, int n, vector<string> &ans, int x, int y, vector<vector<int>> &visited, string op){
        //base case:
        //1) if i go out of bounds
        if(x>=n || y>=n || x<0 || y<0){
            return;
        }
        //2) the cell is already visited
        if(visited[x][y] == 1){
            return;
        }
        //3) If the path is being blocked
        if(m[x][y] == 0){
            return;
        }
        if((x == n-1) && (y == n-1)){
            ans.pb(op);
            return;
        }
        
        //self work:
        visited[x][y] = 1;
        ratmaze(m,n,ans,x+1,y,visited,op+'D'); //down
        ratmaze(m,n,ans,x,y-1,visited,op+'L'); //left
        ratmaze(m,n,ans,x,y+1,visited,op+'R'); //right
        ratmaze(m,n,ans,x-1,y,visited,op+'U'); //up
        visited[x][y] = 0; 
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> ans;
        if(m[0][0] == 0 || m[n-1][n-1] == 0){
            return ans;
        }
        int x = 0, y = 0;
        string op = "";
        vector<vector<int>> visited(n, vector<int>(n,0));
        ratmaze(m, n, ans, x, y, visited, op);
        return ans;
    }
}; 


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends
