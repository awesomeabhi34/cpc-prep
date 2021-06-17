{
	visited<bool> vis(n,false);
	vector<int> topo;
	queue<int> q;
	for(int i=0;i<n;i++){
		if(!vis[i] && indeg[i]==0){
		q.push(i);
		}
	}
	int cnt=0;
	while(!q.empty()){
		int u=q.front();
		q.pop();
		res.push_back(u);
		cnt++;
		vis[u]=true;
		for(auto x : adj[u]){
			if(!vis[x]){
			indeg[x]--;
			if(indeg[x]==0){
				q.push(x);
			}	
			}
		}
		
	}
	int ans=0;
	if(cnt==x){
	for(auto x : res){
		ans+= (n-i-1-adj[x].size());
	}
		
	}
	return ans;
}
