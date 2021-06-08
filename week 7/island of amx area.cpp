int dfs(vector<vector<int> >&grid,vector<vector<bool> >& vis,int r,int c){
       int m=grid.size();
        int n=grid[0].size();
        
        if(r<0||c<0||r>=m||c>=n){
            return 0;
        }
        if(grid[r][c]==0){
            return 0;
        }
        if(vis[r][c]){
            return 0;
        }
        vis[r][c]=true;
            
           int a=dfs(grid,vis,r+1,c);
           int b=dfs(grid,vis,r,c+1);
           int p=dfs(grid,vis,r-1,c);
            int d=dfs(grid,vis,r,c-1);
        return 1+a+b+d+p;
        
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
          int m=grid.size();
        int n=grid[0].size();
        vector<vector<bool> > vis(m,vector<bool>(n,false));
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1 && !vis[i][j]){
                  
                     ans=max(dfs(grid,vis,i,j),ans);
                       
                     
                    
                }
            }
        }
        return ans;
    }
