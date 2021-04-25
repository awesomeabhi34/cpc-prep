int curr=arr[0];
int last=0;

for(int i=1;i<n;i++){
	
	while(curr > sum && last < i-1){
		curr -= arr[last];
		last++;
	}
	
	if(curr == sum){
		cout<<indexes between <<last<<i-1;
		return;
	}
	
	if(i<n){
		curr+= arr[i];
	}
	
}

cout<<"no subarrAY";
return;
