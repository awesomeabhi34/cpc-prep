{
	if(vis[i]==false){
		vis[i]=true;
		rec[i]=true;
		
		for(auto x:adj[i]){
			if(!vis[i]){
				if(dfsutil(adj,vis,x,rec)){
					return true;
				}
			}else if(rec[i]==true){
				return  true;
			}
		}
		
	}
	rec[i]=false;
	return false;
}

{
	
	vector<bool> vis(n,false);
	vector<bool> rec(n,false);
	
	
	for(int i=0;i<V;i++){
		if(!vis[i]&&dfsutil(adj,vis,i,rec)){
		return true;
		}
	}
return false;
}
