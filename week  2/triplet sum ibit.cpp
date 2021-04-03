sort(arr.begin(),arr.end());
int n=arr.size();
vector<vector<int> > abhi;
int x=0;
for(int k=0;k<n;k++){
	if(k>0&& arr[i] == arr[i-1]){
		continue;
	}
	int i=k+1,j=n-1;
	while(i<j){
	if(arr[i]+arr[j] == x - arr[k]){
		vector<int> temp;
		temp.push_back(k);
		temp.push_back(i);
		temp.push_back(j);
		
		while(i<j && arr[i]== arr[i+1]){
			i++;
		}
		while(i<j && arr[j]== arr[j-1]){
			j--;
		}
i++;
j--;
abhi.push_back(temp);
	}else if(arr[i]+arr[j] < x - arr[k]){
	i++;	
	}else{
	j--;	
	}
}
}
return abhi;
