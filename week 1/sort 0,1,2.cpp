int ze=0,on=0,tw=n-1;

while(on<=tw){
	if(arr[on]==0){
		swap(arr[ze],arr[on]);
		on++;
		ze++;
	}else if(arr[on]==1){
		on++;
	}else{
		swap(arr[tw],arr[on]);
		tw--;
	}
}
