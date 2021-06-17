

{
	vector<int> indeg(V,0);
	
	for(int i=0;i<V;i++){
		for(auto x:adj[i]){
			indeg[x]++;
		}
	}
	
	queue<int> q;
	
	for(int i=0;i<V;i++){
		if(indeg[i]==0){
			q.push(i);
		}
	}
	int cnt=0;
	vector<int> topo;
	
	while(!q.empty()){
		int x=q.front();
		q.pop();
		topo.push(x);
		
		for(auto i : adj[x]){
			indeg[i]--;
			if(indeg[i]==0){
				q.push(i);
			}
		}
		cnt++;
	}
	
	if(cnt!=V){
		return;
	}
	
	for(int i=0;i<topo.size();i++){
		cout<<topo[i]<<" ";
	}
	return;
}
