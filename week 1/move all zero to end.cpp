int j=0,i=0;

while(i<n){
	if(arr[i]!=0){
		arr[j]=arr[i];
		j++;
		i++;
	}else{
		i++;
	}
}

while(j<n){
	arr[j]=0;
	j++;
}
