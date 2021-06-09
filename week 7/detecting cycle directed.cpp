bool dfs(vector<int> adj[],vector<bool>& vis,vector<bool>& rec,int i){
	if(!vis[i]){
		vis[i]=true;
		rec[i]=true;
		
		for(auto x: adj[i]){
			if(!vis[x] ){
			    if(dfs(adj,vis,rec,x))
				return true;
			}else if(rec[x]==true){
				return true;
			}
		}
		
	}
	rec[i]=false;
return false;
}


int Solution::solve(int A, vector<vector<int> > &B) {
    
    vector<int> adj[A];
	
	for(int i=0;i<B.size();i++){
	
	adj[B[i][0]-1].push_back(B[i][1]-1);
	}
	
	vector<bool> vis(A,false);
	vector<bool> rec(A,false);
	for(int i=0;i<A;i++){
		if(!vis[i]){
		    if(dfs(adj,vis,rec,i))
			return true;
		}
	}
	
	return false;
    
}
