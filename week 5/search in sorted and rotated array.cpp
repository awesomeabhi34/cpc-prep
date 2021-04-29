    int search(vector<int>& arr, int k) {
        int l=0;
        int r=arr.size();
        r=r-1;
        if(arr[l]==k){
	return l;
}

bool c;
c=(k>arr[l])?true:false;

while(l<=r){
	int mid=l+ (r-l)/2;
	bool a=(arr[mid]>=arr[0])?true:false;
	
	if(arr[mid]==k){
		return mid;
	}
	
	if(c){
	
	if(arr[mid]<k){
		if(a){
			l=mid+1;
		}else{
			r=mid-1;
		}
	}else{
		r=mid-1;
	}	
	}else{
		if(arr[mid]>k){
		if(a){
			l=mid+1;
		}else{
			r=mid-1;
		}
	}else{
		l=mid+1;
	}
	}
	
}
return -1;
    }
