    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int> vis(n);
        for(int i=0;i<n;i++){
            vis[i]=-1;
        }
        
        for(int i=0;i<n;i++){
            if(vis[i]==-1){
              queue<int> q;
                vis[i]=1;
                q.push(i);
                
                while(!q.empty()){
                   int u=q.front();
                    q.pop();
                    for(auto x : graph[u]){
                        if(vis[x]==-1){
                            vis[x]=(vis[u]+1)%2;
                            q.push(x);
                        }else if(vis[x]==vis[u]){
                            return false;
                        }
                    }
                }
            }
        }
       return true; 
    }
