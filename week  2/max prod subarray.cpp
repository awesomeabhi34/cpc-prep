int ans=0;
int neg=1;
int prod=1;

for(int i=0;i<n;i++){
	
	if(arr[i]>0){
		
		prod = max(prod*arr[i] , 1);
		neg = min(neg*arr[i] , 1);
	}else if(arr[i]==0){
		neg=1;
		prod=1;
	}else{
		int temp=prod;
		prod= max(neg*arr[i],1);
		neg= min(temp*arr[i],1);
		
	}
	
	
	if(ans<prod){
		ans=prod;
	}
	
}

return ans;
