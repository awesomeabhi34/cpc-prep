void dfs(vector<vector<int>>& friends,vector<bool>& vis,int s){
     vis[s]=true;
      int n=friends.size();  
        for(int i=0;i<n;i++){
            if(friends[s][i]){
                if(!vis[i]){
                dfs(friends,vis,i);
            } 
            }
           
        }
}
    int findCircleNum(vector<vector<int>>& isConnected) {
         int n=isConnected.size();
        vector<bool> vis(n,false);
        
       int ans=0;
for(int i=0;i<n;i++){
    if(!vis[i]){
ans++;
dfs(isConnected,vis,i);
    }
}
return ans;
        
    }
