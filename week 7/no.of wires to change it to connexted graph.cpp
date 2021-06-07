{
	vis[x]=true;
	
	for(auto x:adj[x]){
		if(!vis[x]){
			dfs(friends,vis,x);
		}
	}
}

{
	list<int> adj[n];
for(int i=0;i<friends.size();i++){
    int a=friends[i][0];
    int b=friends[i][1];
  	adj[a].push_back(b);
	adj[b].push_back(a);
}

 vector<bool> vis(n,false);
 
 for(int i=0;i<n;i++){
    if(!vis[i]){
ans++;
dfs(friends,vis,i);
    }
}
int k=friends.size();

ans--;
if(k<n-1){
	return -1;
}
return ans;
}
