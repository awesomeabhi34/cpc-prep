int Solution::threeSumClosest(vector<int> &arr, int x) {
    
    sort(arr.begin(),arr.end());
int n=arr.size();
int sol=INT_MAX;
int ans;
for(int k=0;k<n;k++){

	int i=k+1,j=n-1;
	while(i<j){
		int sum= arr[i] + arr[j] + arr[k];
	if(sum==x){
	return x;
	}
	
	if(abs(x- sum) < sol){
		sol= abs(x - sum);
		ans= sum;
	}
	
	if(sum<x ){
	i++;	
	}else{
	j--;	
	}
}
}
return ans;
    
}

