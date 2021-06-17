int solve(vector<vector<int>>& matrix) {
 
int cnt=0;
queue<pair<int,int> > q;
    int m = matrix.size();
    if (m == 0) 
        return 0;
    int n = matrix[0].size();
    if (n == 0) 
        return 0;
for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
	if(matrix[i][j]==1)
	cnt++;
		
		if(matrix[i][j]==2){
			q.push(make_pair(i, j));
		}
	}
}

if(cnt==0){
	return 0;
}


int lvl=0;

while(!q.empty()){
	
	lvl++;
	
	int si=q.size();
	pair<int,int> g;
	for(int p=0;p<si;p++){
g=q.front();
q.pop();

int i=g.first;
int j=g.second;

		if(i>=1 && matrix[i-1][j]==1){
			q.push(make_pair(i-1,j));
			matrix[i-1][j]=2;
		}
		if(j>=1 && matrix[i][j-1]==1){
			q.push(make_pair(i,j-1));
			matrix[i][j-1]=2;
		}
		if(i<m-1 && matrix[i+1][j]==1){
			q.push(make_pair(i+1,j));
			matrix[i+1][j]=2;
		}if(j<n-1 && matrix[i][j+1]==1){
			q.push(make_pair(i,j+1));
			matrix[i][j+1]=2;
		}
	}
	
	
}
for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
		if(matrix[i][j]==1){
			return -1;
		}
	}
}

return lvl-1;
	


}
