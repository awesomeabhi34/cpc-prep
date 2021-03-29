 void moveZeroes(vector<int>& arr) {
     int j=0,i=0;
int n=arr.size();
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
    }
