 int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=n;
        if(grid[0][0]!=0 || grid[n-1][n-1]!=0){
            return -1;
        }
        queue<pair<int,int> >q;
        
        vector<vector<int> > vis(n,vector<int>(n,0));
        q.push({0,0});
        vis[0][0]=1;
        
        while(!q.empty()){
            
            pair<int,int> g;
            
            g=q.front();
            int i=g.first,j=g.second;
            q.pop();
            
            	if(i>=1 && grid[i-1][j]==0 && vis[i-1][j]==0){
			q.push(make_pair(i-1,j));
			vis[i-1][j]=vis[i][j]+1;
		}
		if(j>=1 && grid[i][j-1]==0 && vis[i][j-1]==0){
			q.push(make_pair(i,j-1));
			vis[i][j-1]=vis[i][j]+1;
		}
		if(i<m-1 && grid[i+1][j]==0 && vis[i+1][j]==0){
			q.push(make_pair(i+1,j));
			vis[i+1][j]=vis[i][j]+1;
		}if(j<n-1 && grid[i][j+1]==0 && vis[i][j+1]==0){
			q.push(make_pair(i,j+1));
			vis[i][j+1]=vis[i][j]+1;
		}  
         
            if(j<n-1 && i<n-1 && grid[i+1][j+1]==0 && vis[i+1][j+1]==0){
			q.push(make_pair(i+1,j+1));
			vis[i+1][j+1]=vis[i][j]+1;
		}      if(j>0 && i>0 && grid[i-1][j-1]==0 && vis[i-1][j-1]==0){
			q.push(make_pair(i-1,j-1));
			vis[i-1][j-1]=vis[i][j]+1;
		}      if(j>0 && i<n-1 && grid[i+1][j-1]==0 && vis[i+1][j-1]==0){
			q.push(make_pair(i+1,j-1));
			vis[i+1][j-1]=vis[i][j]+1;
		}      if(j<n-1 && i>0 && grid[i-1][j+1]==0 && vis[i-1][j+1]==0){
			q.push(make_pair(i-1,j+1));
			vis[i-1][j+1]=vis[i][j]+1;
		} 
            
            
        }
        
        if(vis[n-1][n-1]==0){
            return -1;
        }
        return vis[n-1][n-1];
    }
