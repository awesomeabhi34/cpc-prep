
    int dfs(vector<vector<int> >&grid,vector<vector<bool> >& vis,int r,int c){
       int m=grid.size();
        int n=grid[0].size();
        
        if((r<0||c<0||r>=m||c>=n)||(grid[r][c]==0)){
            return 1;
        }
        
        if(vis[r][c]){
            return 0;
        }
        vis[r][c]=true;
        return dfs(grid,vis,r+1,c)+dfs(grid,vis,r,c+1)+dfs(grid,vis,r-1,c)+dfs(grid,vis,r,c-1);
        
    }
    
    int islandPerimeter(vector<vector<int>>& grid) {
     int m=grid.size();
        int n=grid[0].size();
        vector<vector<bool> > vis(m,vector<bool>(n,false));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]){
                    return dfs(grid,vis,i,j);
                    
                    
                }
            }
        }
        return 0;
    }
