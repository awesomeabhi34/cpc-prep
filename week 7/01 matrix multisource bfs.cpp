vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
       int m=mat.size();
        int n=mat[0].size();
        vector<vector<int>> ans(m,vector<int>(n,0));
        queue<pair<int,int> > q;
        pair<int,int> g;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==0){
                    q.push({i,j});
                  
                }
            }
        }
        
        while(!q.empty()){
            g=q.front();
            int i=g.first;
            int j=g.second;
            q.pop();
            	if(i>=1 && mat[i-1][j]==1){
			q.push(make_pair(i-1,j));
                    ans[i-1][j]=ans[i][j]+1;
			mat[i-1][j]=0;
		}
		if(j>=1 && mat[i][j-1]==1){
			q.push(make_pair(i,j-1));
             ans[i][j-1]=ans[i][j]+1;
			mat[i][j-1]=0;
		}
		if(i<m-1 && mat[i+1][j]==1){
			q.push(make_pair(i+1,j));
             ans[i+1][j]=ans[i][j]+1;
			mat[i+1][j]=0;
		}if(j<n-1 && mat[i][j+1]==1){
			q.push(make_pair(i,j+1));
             ans[i][j+1]=ans[i][j]+1;
			mat[i][j+1]=0;
		}
            
            
            
        }
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
            //    cout<<mat[i][j]<<" ";
            }
        }
        
       return ans; 
    }
