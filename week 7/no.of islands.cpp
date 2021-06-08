  void dfs(vector<vector<char> >&grid,vector<vector<bool> >& vis,int r,int c){
       int m=grid.size();
        int n=grid[0].size();
        
        if((r<0||c<0||r>=m||c>=n)||(grid[r][c]=='0')){
            return ;
        }
        
        if(vis[r][c]){
            return ;
        }
        vis[r][c]=true;
        dfs(grid,vis,r+1,c);
        dfs(grid,vis,r,c+1);
        dfs(grid,vis,r-1,c);
        dfs(grid,vis,r,c-1);
        return;
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<bool> > vis(m,vector<bool>(n,false));
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1' && vis[i][j]==false){
                   ans++;
                    dfs(grid,vis,i,j);
                    
                }
            }
        }
       return ans; 
    }
