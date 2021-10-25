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
