int ans=INT_MIN;
int sum=0;
for(int i=0;i<n;i++){
	
	if(arr[i] < sum + arr[i]){
		sum+= arr[i];
	}else{
		sum = arr[i];
	}
	
	if(sum > ans){
		ans = sum;
	}
}

return ans;
