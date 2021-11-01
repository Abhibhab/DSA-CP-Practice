// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:

bool dfs (vector<int>adj[],int color,vector<bool>&vis,int node,vector<int>&vec){
    vis[node]=true;
    vec[node]=color;
    for(auto it:adj[node]){
        if(!vis[it]){
            if(dfs(adj,color^1,vis,it,vec)==false){
                return false;
                }
        }else{
            if(vec[node]==vec[it]){
                return false;
            }
        }
    }
    return true;
    
}



	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	    vector<int>vec(V,-1);
	    vector<bool>vis(V,false);
	    for(int i=0;i<V;i++){
	        if(!vis[i]){
	            if(!dfs(adj,0,vis,i,vec)){
	                return false;
	                
	            }
	        }
	    }
	    return true;
	    
	    
	}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}  // } Driver Code Ends
