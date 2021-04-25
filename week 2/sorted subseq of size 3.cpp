vector<int> sol;

int low[n],high[n];
low[0]=arr[0];
high[n-1]=arr[n-1];
for(int i=1;i<n;i++){
	if(arr[i]<low[i-1]){
		low[i]=arr[i];
	}else{
		low[i]=low[i-1];
	}
}
for(int i=n-2;i>=0;i--){
	if(arr[i]>high[i+1]){
		high[i]=arr[i];
	}else{
		high[i]=high[i+1];
	}
}

for(int i=1;i<n-1;i++){
	if(arr[i] > low[i] && arr[i] < high[i]){
		sol.push_back(low[i]);
		sol.push_back(arr[i]);
		sol.push_back(high[i]);
		break;
	}
}

return sol;
