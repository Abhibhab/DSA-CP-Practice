bool check(int V,vector<int>&vis,vector<int>&dfsvis,vector<int>adj[]){
        vis[V]=1;
        dfsvis[V]=1;
        for(auto it:adj[V]){
            if(!vis[it]) 
            {
                if(check(it,vis,dfsvis,adj))   return true;
            }
            else if(dfsvis[it]==1)  return true;
        }
        dfsvis[V]=0;
        return false;
    }
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<int>vis(V+1,0);
        vector<int>dfsvis(V+1,0);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(check(i,vis,dfsvis,adj)){
                    return true;
                }
            }
        }
        return false;
    }
