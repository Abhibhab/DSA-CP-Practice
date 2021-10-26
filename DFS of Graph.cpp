// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    
    void dfs(vector<int>&ans,int vertex,vector<bool>&vis,vector<int> adj[]){
        
        
        ans.push_back(vertex);
        vis[vertex]=true;
        for(auto child:adj[vertex]){
            if(vis[child]==false){
                dfs(ans,child,vis,adj);
            }
        }
        
        
        
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<bool>vis(V+10,false);
        vector<int>vec;
        dfs(vec,0,vis,adj);
        return vec;

        
        
        
        
    
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends
