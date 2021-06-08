int dfs(vector<int> adj[],vector<int> quiet,vector<int>& ans,int x){
	int val=quiet[x];
	int cur=x;
	for(auto i:adj[x]){
		if(ans[i]==-1){
			ans[i]=dfs(adj,quiet,ans,i);
		}
		if(quiet[ans[i]]<val){
			val=quiet[ans[i]];
			cur=ans[i];
		}
	}
	return cur;
}

vector<int> loudAndRich(vector<vector<int> >& richer, vector<int>& quiet){
int n=quiet.size();
vector<int> ans(n,-1);
vector<int> adj[n];

for(int i=0;i<richer.size();i++){
	adj[richer[i][1]].push_back(richer[i][0]);
}
	
	
	for(int i=0;i<n;i++){
		if(ans[i]==-1){
			ans[i]=dfs(adj,quiet,ans,i);
		}
	}
	return ans;
}
