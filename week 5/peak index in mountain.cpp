int l=0;
int r=arr.size();
r=r-1;
while(l<=r){
	int mid= l +(r-l)/2;
	if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
		return mid;
	}
if(arr[mid]<arr[mid-1]){
	r=mid-1;
}else{
	l=mid+1;
}
}
return -1;
