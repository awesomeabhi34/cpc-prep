  int maxDistance(vector<vector<int>>& grid) {
     int n=grid.size();
        int m=n;
        queue<pair<int,int> >q;
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    cnt++;
                    q.push({i,j});
                }
            }
        }
        
        if(cnt==0 || cnt==(n*n)){
            return -1; 
        }
        int lvl=0;
        while(!q.empty()){
            int si=q.size();
            lvl++;
            for(int p=0;p<si;p++){
             pair<int,int> g= q.front();
            q.pop();
            
            int i=g.first,j=g.second;
              
		if(i>=1 && grid[i-1][j]==0){
			q.push(make_pair(i-1,j));
			grid[i-1][j]=1;
		}
		if(j>=1 && grid[i][j-1]==0){
			q.push(make_pair(i,j-1));
			grid[i][j-1]=1;
		}
		if(i<m-1 && grid[i+1][j]==0){
			q.push(make_pair(i+1,j));
			grid[i+1][j]=1;
		}if(j<n-1 && grid[i][j+1]==0){
			q.push(make_pair(i,j+1));
			grid[i][j+1]=1;
		}  
            }
           
            
        }
        
        return lvl-1;
        
    }
