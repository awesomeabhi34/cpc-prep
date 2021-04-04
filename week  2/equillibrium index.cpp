int sum=0;
curr_sum=0;

for(int i=0;i<n;i++){
	sum+= arr[i];
}

for(int i=0;i<n;i++){
	sum-= arr[i];
	
	if(sum==curr_sum){
		return i;
	}
	
	curr_sum+= arr[i];
}

return -1;
