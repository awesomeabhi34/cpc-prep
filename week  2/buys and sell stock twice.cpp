int ans[n];

ans[n-1]=0;
int val=arr[n-1];
for(int i=n-2;i>=0;i--){
if(arr[i]>val){
	val=arr[i];
}	

ans[i] = max(ans[i+1], arr[i] - val);
	
}
int val=arr[0];
for(int i=1;i<n;i++){
	if(arr[i]<arr[i-1]){
		val=arr[i];
		
	}
	
	ans[i] = max(ans[i-1] , ans[i] + arr[i] - val);
}

return ans[n-1];
