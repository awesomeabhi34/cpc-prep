  int hIndex(vector<int>& arr) {
       int n=arr.size();

if(arr[n-1]==0){
	return 0;
}
int r=n-1,l=0;
int mid;
while(l<=r){
	mid=l+(r-l)/2;
	if(arr[mid]>=(n-mid)){
		r=mid-1;
	}else{
		l=mid+1;
	}
}

if(arr[mid]>=n-mid){
	return n-mid;
}else{
	return n-mid-1;
} 
    }

