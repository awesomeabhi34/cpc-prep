int lo=0,hi=n-1;
while(lo< hi){
	if(arr[lo]%2==0){
		lo++;
	}else{
		swap(arr[lo],arr[hi]);
		hi--;
	}
	
}
