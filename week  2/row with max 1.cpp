int ans=0;
int j=n-1;
for(int i=0;i<m;i++){
while(j>=0 && arr[i][j]==1 ){
	ans=i;
	if(j==0){
		return i;
	}
	j--;
}	
}

return ans;
