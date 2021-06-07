void dfs(vector<vector<int>>& friends,vector<bool>& vis,int s){
     vis[s]=true;
        
        for(auto x:friends[s]){
            if(!vis[x]){
                dfs(friends,vis,x);
            }
        }
}
int solve(vector<vector<int>>& friends) {
    int n=friends.size();
    vector<bool> vis(n,false);
int ans=0;
for(int i=0;i<n;i++){
    if(!vis[i]){
ans++;
dfs(friends,vis,i);
    }
}
return ans;
}

