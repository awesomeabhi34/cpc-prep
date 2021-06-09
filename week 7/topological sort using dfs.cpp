{
	vis[i]=true;
	
	for(auto x:adj[i]){
		if(!vis[x]){
			dfs(adj,vis,x);
		}
	}
	
	st.push(i);
	
	return;
	
}

{
	vector<bool> vis(n,false);
	stack<int> st;
	for(int i=0;i<n;i++){
		if(!vis[i]){
			dfs(adj,vis,i,st);
		}
	}
	
	while(!st.empty()){
		cout<<st.top()<<" ";
		st.pop();
	}
	
	
}
