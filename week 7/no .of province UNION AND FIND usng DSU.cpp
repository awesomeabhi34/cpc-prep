   int get(vector<int> parent,int x){
	if(parent[x]!=x){
		return parent[x]=get(parent,parent[x]);
	}
	return x;
}
    
    int findCircleNum(vector<vector<int>>& edges) {
        int n=edges.size();
       vector<int> parent(n);
vector<int> rank(n,1);
        
        
for(int i=0;i<n;i++){
	parent[i]=i;
}	
int ans=0;
for(int i=0;i<edges.size();i++){
    for(int j=i+1;j<edges.size();j++){
        if(edges[i][j]==1){
                 	int a=get(parent,i);
	int b=get(parent,j);
	if(a!=b){
		if(rank[a]>rank[b]){
			swap(a,b);
		}
		rank[b]+=rank[a];
		parent[a]=b;
	    }
        
        }
   
    }

}
        for(int i=0;i<edges.size();i++){
            cout<<parent[i]<<" ";
        }
        cout<<endl;
        set<int> s;
        for(int i=0;i<edges.size();i++){
          
            s.insert(get(parent,i));
        }
        
return s.size();	
        
    }
