pair<int,int> minmax;
int i;
if(n%2==0){
	if(arr[0]<arr[i]){
		minmax.first= arr[0];
		minmax.second= arr[1];
	}else{
			minmax.first= arr[1];
		minmax.second= arr[0];
	}
	i=2;
}else{
	minmax.first= arr[0];
		minmax.second= arr[0];
		i=1;
}

while(i<n-1){
	if(arr[i]<arr[i+1]){
		if(minmax.first>arr[i]){
			minmax.first=arr[i];
		}
		if(minmax.second< arr[i+1]){
			minmax.second=arr[i+1];
		}
	}else{
			if(minmax.second<arr[i]){
			minmax.second=arr[i];
		}
		if(minmax.first< arr[i+1]){
			minmax.first=arr[i+1];
		}
	}
}
return minmax;
