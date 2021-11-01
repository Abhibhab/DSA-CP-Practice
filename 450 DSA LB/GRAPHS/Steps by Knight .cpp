// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution 
{
    public:
bool isSafe(int n, int col, int row) {
        if (col < 0 || col >= n || row < 0 || row >= n) return false;
        return true;
    }
    
    int rowMoves[8] = {-2, -1, 1, 2, 2, 1, -1, -2};
    int colMoves[8] = {1, 2, 2, 1, -1, -2, -2, -1};
    public:
	int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N) {
	    queue<pair<int,int>>q;
        q.push({KnightPos[0]-1,KnightPos[1]-1});
        vector<vector<int>>vis(N+1,vector<int>(N+1,0));
        while(!q.empty()) {
            int a = q.front().first;
            int b = q.front().second;
            if (a == TargetPos[0]-1 && b == TargetPos[1]-1) break;
            q.pop();
            for (int i=0; i<8; ++i) {
                int newX = a + rowMoves[i];
                int newY = b + colMoves[i];
                if (isSafe(N, newX, newY) && vis[newX][newY] == 0) {
                    q.push({newX, newY});
                    vis[newX][newY] = vis[a][b] + 1;
                }
            }
        }
        return vis[TargetPos[0]-1][TargetPos[1]-1];
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		vector<int>KnightPos(2);
		vector<int>TargetPos(2);
		int N;
		cin >> N;
		cin >> KnightPos[0] >> KnightPos[1];
		cin >> TargetPos[0] >> TargetPos[1];
		Solution obj;
		int ans = obj.minStepToReachTarget(KnightPos, TargetPos, N);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends
