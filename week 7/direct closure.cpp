
void dfs(vector<vector<int>>& graph,vector<int>& s,vector<bool>& vis,int i){
    vis[i]=true;
for(auto x:graph[i]){
    if(!vis[x]){
        dfs(graph,s,vis,x);
    }
}

s.push_back(i);
return;

}

vector<vector<int>> solve(vector<vector<int>>& graph) {
    int n=graph.size();
    vector<vector<int> > mat(n,vector<int>(n,0));
    vector<bool> vis(n,false);
    for(int i=0;i<n;i++){
        mat[i][i]=1;
    }

for(int i=0;i<n;i++){
    vector<int> s;
    if(!vis[i]){
        dfs(graph,s,vis,i);
for(int i=0;i<s.size();i++){
    for(int j=0;j<s.size();j++){
        if(i!=j){
            mat[s[i]][s[j]]=1;
        }
    }
}

    }
}
return mat;
}
