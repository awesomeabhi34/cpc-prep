int lc(vector<int>& arr, int x){
	   
	    int l=0;
	    int r=n-1;
	    while(l<=r){
	    	
	        int mid=l+(r-l)/2;
	        if(arr[mid]==x && (mid==0||arr[mid] > arr[mid-1])){
	            return mid;
	        }
	        if(arr[mid]>=x){
	            r=mid-1;
	        }else{
	            l=mid+1;
	        }
	    }
	    return -1;
	}
		int rc(vector<int>& arr, int x){
			 int n=arr.size(); 
	    int l=0;
	    int r=n-1;
	    while(l<=r){
	        int mid=l+(r-l)/2;
	        if(arr[mid]==x && (mid==n-1||arr[mid] < arr[mid+1])){
	            return mid;
	        }
	        if(arr[mid]>x){
	            r=mid-1;
	        }else{
	            l=mid+1;
	        }
	    }
	    return -1;
	}
		
	int searchRange(vector<int>& arr, int x) {
	   int n=arr.size(); 
	    
	    int l= lc(arr,n,x);
	    int r=rc(arr,n,x);
	    
	    if(l!=-1 && r!= -1){
	       return r-l +1; 
	    }
	    return 0;
	}
