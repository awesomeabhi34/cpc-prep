    pair<int,int> sol(int l,int n){
        
                int r=(l-1)/n;
                int c=(l-1)%n;
        
        pair<int,int> g;
        
        
        if(r%2==0){
            g=make_pair(n-1-r,c);
        }else{
            g=make_pair(n-1-r,n-1-c);
        }
        return g;
    }
    
    int snakesAndLadders(vector<vector<int>>& board) {
        queue<pair<int,int> > q;
    
        int n=board.size();
        q.push({n-1,0});
    vector<vector<int> > vis(n,vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                vis[i][j]=-1;
            }
        }
        
        vis[n-1][0]=0;
        
        while(!q.empty()){
            pair<int,int> g=q.front();
        int i=g.first,j=g.second;
             int p;
            q.pop();
           // cout<<vis[i][j]<<endl;
           if((n-1-i)%2==1){
             p= (n*(n-1-i) + n-j);   
           }else{
               p=(n*(n-1-i) + j+1) ;
           }
          if(p==(n*n)){
              return vis[i][j];
          }
            for(int k=1;k<=6;k++){
                //cout<<p+k<<" ";
                if(p+k > (n*n)){
                    break;
                }
                
                if(p+k==(n*n)){
                    return vis[i][j]+1;
                }
                
                int l=p+k;
                
                pair<int,int> gg = sol(l,n);
                int r=gg.first,c=gg.second;
              
                  if(vis[r][c]==-1){
                      vis[r][c]=vis[i][j]+1;
                      if(board[r][c]!=-1){
                          
                          if(board[r][c]==(n*n)){
                              return vis[r][c];
                              
                          }
                          
                         gg=sol(board[r][c],n);
                          if(vis[gg.first][gg.second]==-1){
                                vis[gg.first][gg.second]=vis[r][c];
                          q.push(gg);
                          }
                        
                      }else{
                          q.push({r,c});
                      }
                  }      
                   
                        
                        
                    
                }
                
            }
        
        if(n%2==0){
                     cout<<vis[0][0];
            return vis[0][0];
   
        }else{
            return vis[0][n-1];
        }
        
        }
