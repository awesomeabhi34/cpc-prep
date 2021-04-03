unordered_set<int> abhi;
abhi.insert(arr[0]);
for(int i=1;i<n;i++){
	if(abhi.find(x - arr[i])!=abhi.end()){
		return true;
	}
	
	abhi.insert(arr[i]);
}

return false;
