int r=arr.size();
r=r-1;
int l=0;

while(l<=r){
	int mid= l + (r-l)/2;
	
	if(arr[mid]==k){
		return k;
	}
	
	if(arr[mid]<k){
		l=mid+1;
	}else{
		r=mid-1;
	}
	
}

if(arr[mid]>k){
	return arr[mid];
}else{
	return -1;
}
