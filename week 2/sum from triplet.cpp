sort(arr,arr+n);

for(int k=0;k<n;k++){
	int i=k+1,j=n-1;
	while(i<j){
	if(arr[i]+arr[j] == x - arr[k]){
		return true;
	}else if(arr[i]+arr[j] < x - arr[k]){
	i++;	
	}else{
	j--;	
	}
}
}
return false;
