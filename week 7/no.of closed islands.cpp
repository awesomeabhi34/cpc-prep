
        bool dfs(vector<vector<int> >&grid,vector<vector<bool> >& vis,int r,int c){
       int m=grid.size();
        int n=grid[0].size();
        
        if(r<0||c<0||r>=m||c>=n){
            return false;
        }
        if(grid[r][c]==1){
            return true;
        }
        if(vis[r][c]){
            return true;
        }
        vis[r][c]=true;
            
            bool a=dfs(grid,vis,r+1,c);
           bool b=dfs(grid,vis,r,c+1);
            bool p=dfs(grid,vis,r-1,c);
            bool d=dfs(grid,vis,r,c-1);
        return a&&b&&d&&p;
        
    }
    
    int closedIsland(vector<vector<int>>& grid) {
          int m=grid.size();
        int n=grid[0].size();
        vector<vector<bool> > vis(m,vector<bool>(n,false));
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0 && !vis[i][j]){
                   if(dfs(grid,vis,i,j)){
                       ans++;
                       
                   }
                    
                    
                }
            }
        }
        return ans;
    }
