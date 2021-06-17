
int get(vector<int> parent,int x){
	if(parent[x]!=x){
		return parent[x]=get(parent,parent[x]);
	}
	return x;
}
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        
    vector<int> parent(1001);
vector<int> rank(1001,1);
        
        
for(int i=0;i<1001;i++){
	parent[i]=i;
}	
vector<int> ans;
for(int i=0;i<edges.size();i++){
	int a=get(parent,edges[i][0]);
	int b=get(parent,edges[i][1]);
	if(a==b){
ans.clear();
ans.push_back(edges[i][0]);	
ans.push_back(edges[i][1]);	
	}else {
		if(rank[a]>rank[b]){
			swap(a,b);
		}
		rank[b]+=rank[a];
		parent[a]=b;
	}
}	
return ans;	
    }
