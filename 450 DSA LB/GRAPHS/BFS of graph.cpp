// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int v, vector<int> adj[]) {
         vector<int>ans;
     vector<bool>visite(v,0);
     queue<int>q;
     
     q.push(0);
     ans.push_back(0);
      visite[0]=true;
     while(q.empty()==false)
     {
         int p=q.front();
         q.pop();
         for(int i=0;i<adj[p].size();i++)
         { 
             if(!visite[adj[p][i]])
         {
             q.push(adj[p][i]);
             ans.push_back(adj[p][i]);
             visite[adj[p][i]]=true;
         }
             
         }
     }
     return ans;
   
        
        
    
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends
