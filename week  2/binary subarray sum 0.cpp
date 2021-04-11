int ans=0;
unorddered_map<int,int > abhi;
int pref=0;
for(int i=0;i<n;i++){
	if(arr[i]==0){
		pref-=1;
	}else{
		pref+=1;
	}
	
	if(pref== 0){
		if(ans< i+1){
			ans=i+1;
		}
		
		continue;
	}
	
	if(abhi.find(pref)!= abhi.end()){
		if(ans < i- abhi[pref]){
			ans = i-abhi[pref];
		}
	
	}else{
		abhi[pref]=i;
	}
}
return ans;
