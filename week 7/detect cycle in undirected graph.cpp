{
	vis[i]=true;
	
	for(auto x:adj[i]){
		if(!vis[x]){
			if(dfsutil(adj,vis,x,i)
			return true;
		}else if(p!=x){
			return true;
		}
	}
	
	return false;
}

{
	
	vector<bool> vis(n,false);
	
	for(int i=0;i<V;i++){
		if(!vis[i]&&dfsutil(adj,vis,i,-1)){
		return true;
		}
	}
return false;	
}
