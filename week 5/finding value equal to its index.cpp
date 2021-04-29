int l=0;
int r=arr.size();
r=r-1;

while(l<=r){
	int mid=l + (r-l)/2;
	
	if(arr[mid]==mid){
		return mid;
	}
	
	if(arr[mid]>k){
		r=mid-1;
	}else{
		l=mid+1;
	}
}

return -1;
