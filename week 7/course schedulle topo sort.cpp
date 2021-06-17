 vector<int> findOrder(int n, vector<vector<int>>& pre) {
    vector<int> adj[n];
        vector<bool> vis(n,false);
        vector<int> indeg(n,0);
        queue<int> q;
        vector<int> res;
        
        for(int i=0;i<pre.size();i++){
            adj[pre[i][1]].push_back(pre[i][0]);
            indeg[pre[i][0]]++;
        }
        for(int i=0;i<n;i++){
            if(indeg[i]==0){
                q.push(i);
            }
        }
        int cnt=0;
        while(!q.empty()){
            int u=q.front();
            q.pop();
            vis[u]=true;
            res.push_back(u);
            cnt++;
            for(auto x : adj[u]){
                if(!vis[x]){
                    indeg[x]--;
                    if(indeg[x]==0){
                        q.push(x);
                    }
                }
            }
        }
        
        if(cnt==n){
            return res;
        }
      res.clear();
        return res;
    }
