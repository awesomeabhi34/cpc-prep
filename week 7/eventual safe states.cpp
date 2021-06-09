  bool dfs(vector<vector<int>>& graph,vector<int>& vis,int i,vector<int>& ans){
        
        if(vis[i]==0){
            vis[i]=1;
            
            for(auto x:graph[i]){
if(vis[x]==0 ){
if(dfs(graph,vis,x,ans)){
    return true;
}
}else if(vis[x]==1){
return true;}
            }
            
        }
        
        vis[i]=2;
        ans.push_back(i);
        return false;
        
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int> vis(n,0);
        vector<int> ans;
        for(int i=0;i<graph.size();i++){
            if(vis[i]==0){
       bool a= dfs(graph,vis,i,ans);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
