 void dfs(vector<vector<char>>& board,int i,int j){
        int m=board.size();
        int n=board[0].size();
      
      if(i<0||j<0||i>=m||j>=n){
          return ;
      }
      
    
      
      if(board[i][j]=='X'||board[i][j]=='V'){
       
          return ;
      }
     
     
     board[i][j]='V';
      dfs(board,i+1,j);
       
        dfs(board,i,j+1);
    dfs(board,i-1,j);
        dfs(board,i,j-1);
      
    
      
    }
    void solve(vector<vector<char>>& board) {
       int m=board.size();
        int n=board[0].size();
        
      
       
        
         for(int i=0;i<m;i++){
           if(board[i][0]=='O'){
dfs(board,i,0);}
             
             if(board[i][n-1]=='O'){
dfs(board,i,n-1);}
             
             }
        
        for(int i=0;i<n;i++){
           if(board[0][i]=='O'){
dfs(board,0,i);}
             
             if(board[m-1][i]=='O'){
dfs(board,m-1,i);}
             
             }
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='O'){
                   board[i][j]='X';
                }
                
                if(board[i][j]=='V'){
                     board[i][j]='O';
}
            }
        }
        
    }
