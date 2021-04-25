 vector<vector<int>> fourSum(vector<int>& arr, int x) {
        vector<vector<int> > sol;
        sort(arr.begin(),arr.end());
int n= arr.size();  
for(int i=0;i<n;i++){
	if(i>0 && arr[i]== arr[i-1]){
		continue;
	}
	for(int j=i+1;j<n;j++){
		if(j>i+1 && arr[j]== arr[j-1]){
		continue;
	}
		int k=j+1,l=n-1;
		
		while(k<l){
		if(arr[k] + arr[l] == x - arr[i] - arr[j] ){
			
			vector<int> abhi;
			 abhi.push_back(arr[i]);
			 abhi.push_back(arr[j]);
			 abhi.push_back(arr[k]);
			 abhi.push_back(arr[l]);
			sol.push_back(abhi);
			while(k<l && arr[k] == arr[k+1]){
				k++;
			}
			while(k<l && arr[l] == arr[l-1]){
				l--;
			}	
			k++;
			l--;
		}else if(arr[k] + arr[l] < x - arr[i] - arr[j] ){
			k++;
		}else{
			l--;
		}
		
			
		}
	}
}
return sol;
    }
