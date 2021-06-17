{
	int solve(vector<vector<int>>& matrix) {
    int n=matrix.size();
	if(n==0){
		return -1;
	}
	int m=matrix[0].size();
	int cnt=0;
	queue<pair<int,int> > q;
	vector<vector<int> > ans(n,vector<int>(m));
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			ans[i][j]=-1;
			if(matrix[i][j]==0){
				cnt++;
				ans[i][j]=0;
				q.push({i,j});
				
			}
		}
	}
	if(cnt==0||cnt==(m*n)){
		return -1;
	}
	while(!q.empty()){
		pair<int,int> g=q.front();
		q.pop();
		int i=g.first,j=g.second;
		
		if(i+1>=0&&j>=0&&i+1<n&&j<m &&  ans[i+1][j]==-1){
			ans[i+1][j]=ans[i][j]+1;
			q.push({i+1,j});
		}	
		if(i-1>=0&&j>=0&&i-1<n&&j<m &&  ans[i-1][j]==-1){
			ans[i-1][j]=ans[i][j]+1;
			q.push({i-1,j});
		}	
		if(i>=0&&j+1>=0&&i<n&&j+1<m &&  ans[i][j+1]==-1){
			ans[i][j+1]=ans[i][j]+1;
			q.push({i,j+1});
		}	
		if(i>=0&&j-1>=0&&i<n&&j-1<m &&  ans[i][j-1]==-1){
			ans[i][j-1]=ans[i][j]+1;
			q.push({i,j-1});
		}
		
	}
	int mx=INT_MIN;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(ans[i][j]>mx){
				mx=ans[i][j];
			}
		}
	}
return mx;
}	
	
}
