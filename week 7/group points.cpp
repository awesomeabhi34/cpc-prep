int get(vector<int>& parent,int x){
    if(parent[x]!=x){
        return parent[x]=get(parent,parent[x]);
    }
    return x;
}

int solve(vector<vector<int>>& points, int k) {
    int n=points.size();
    vector<int> parent(n);
     for(int i=0;i<n;i++){
         parent[i]=i;
     }
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        int a=pow((points[j][0]-points[i][0]),2);
         int b=pow((points[j][1]-points[i][1]),2);
        double di= sqrt(a+b);
        cout<<di<<endl;
        if(di<=k){
            int p=get(parent,i);
            int q=get(parent,j);
            if(p!=q){
                parent[p]=parent[q];
            }

        }
    }
}

set<int> s;

for(int i=0;i<n;i++){
    s.insert(get(parent,i));
}
return s.size();
}
