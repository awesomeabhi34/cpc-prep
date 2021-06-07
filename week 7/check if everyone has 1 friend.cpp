bool solve(int n, vector<vector<int>>& friends) {
    
list<int> adj[n];
for(int i=0;i<friends.size();i++){
    int a=friends[i][0];
    int b=friends[i][1];
  	adj[a].push_back(b);
	adj[b].push_back(a);
}


for(int i=0;i<n;i++){
    if(adj[i].size()==0){
       return false;
    }

}




return true;
}
