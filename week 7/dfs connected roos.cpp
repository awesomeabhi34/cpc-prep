 void dfs(vector<vector<int>>& rooms,vector<bool>& vis,int s ){
        vis[s]=true;
        
        for(auto x:rooms[s]){
            if(!vis[x]){
                dfs(rooms,vis,x);
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
       int n=rooms.size();
        vector<bool> vis(n,false);
        
        vis[0]=true;
        dfs(rooms,vis,0);
        
        for(int i=0;i<n;i++){
            if(!vis[i]){
                return false;
            }
        }
        return true;
    }
