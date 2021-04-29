int func(int arr[]){
	int lo=0;
	int hi=1;
	
	while(arr[h]==0){
		l=h;
		h=2*h;
	}
	
	int ans=myf(arr,l,h);
	return ans;
}

int myf(int arr[],int l,int r){
	while(l<=r){
		int mid=l+(r-l)/2;
		
		if(arr[mid]==1 && (mid==0||arr[mid-1]==0)){
			return mid;
		}
		if(arr[mid]==1){
			r=mid-1;
		}else{
			l=mid+1;
		}
	}
	return -1;
}
