
bool cmp(pair<int,int> a, pair<int,int> b){
	if(a.second== b.second){
		return a.first<b.first;
	}
	
	return a.second > b.second;
}


{
sort(arr,arr+n);
int i=0;
vector<pair<int,int> > abhi;
int count=1;
while(i<n){
	if(arr[i]==arr[i+1]){
		count++;
	}
	
	if(i== n-1 || arr[i]!=arr[i+1] ){
		abhi.push_back({arr[i],count});
		count=1;
	}
}

sort(abhi.begin(),abhi.end(),cmp);	
i=0;
for(auto j: abhi){
	for(int k=0;k<j.second;k++){
		arr[i]=j.first;
		i++;
	}
}
return arr;
}

