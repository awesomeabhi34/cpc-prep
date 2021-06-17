int networkDelayTime(vector<vector<int>>& times, int n, int k) {
       vector<vector<int> > vis(n,vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                vis[i][j]=-1;
            }
        }
        
        
        for(int i=0;i<times.size();i++){
            vis[times[i][0]-1][times[i][1]-1]=times[i][2];
          
        }
        
        
        vector<int> ans(n,INT_MAX);
        
        priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > > pq;
        
        pq.push({0,k-1});
        ans[k-1]=0;
        while(!pq.empty()){
            pair<int,int> g=pq.top();
            pq.pop();
            int u=g.second;
            
            for(int i=0;i<n;i++){
                if(vis[u][i]!=-1 && ans[i]>ans[u]+vis[u][i]){
                     ans[i]=ans[u]+vis[u][i];
                    pq.push({ans[i],i});
                }
            }
        }
        
    for(int i=0;i<n;i++){
        if(ans[i]==INT_MAX){
            return -1;
        }
    }
        
      return *max_element(ans.begin(),ans.end()); 
    }
