unordered_set<int> abhi;
abhi.insert(0);
int sum=0;
for(int i=0;i<n;i++){
	sum += arr[i];
	
	if(abhi.find(sum)!= abhi.end()){
		return true;
	}
	
	abhi.insert(sum);
}

return false;
