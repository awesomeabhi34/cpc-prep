  int maxAscendingSum(vector<int>& arr) {
        int ans=0;
int temp=0;
int n= arr.size();
for(int i=0;i<n-1;i++){
	temp+=arr[i];
	
	if(arr[i+1]<= arr[i]){
		if(temp > ans){
			ans=temp;
		}
		temp=0;
	}
	
}

temp+= arr[n-1];

if(temp > ans){
			ans=temp;
		}
		
		return ans;
    }
