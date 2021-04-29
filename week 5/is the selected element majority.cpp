

int lfunc(vector<int> arr,int k){
	int l=0;
	int r=arr.size();
	r=r-1;
	
	while(l+1<=r){
		int mid = l + (r-l)/2;
		if(arr[mid]==k&&(mid==0 || arr[mid-1]!=k)){
			return mid;
		}
		
		if(arr[mid]==k){
			r=mid;
		}
		
		if(arr[mid]<k){
		l=mid+1;	
		}else{
			r=mid;
		}
	}
	
	return -1;
}

bool ans(vector<int> arr,int k){
	if (arr.size()==1){
		if(arr[0]==k){
	return true;	
	}else{
		return false;
	}
	}
	int r=arr.size();
	if (arr.size()==2){
		if(arr[0]==arr[r-1] && arr[0]==k){
	return true;	
	}else{
		return false;
	}
	}

	int l= lfunc(arr,k);
	if(l==-1){
		return false;
	}
	if(l + r/2 <=n && arr[l+r/2]==k){
		return true;
	}
	return false;
}
