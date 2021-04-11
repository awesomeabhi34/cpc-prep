int n = nums.size();
int arr[n];
for(int i=0;i<n;i++){
	arr[i]=(nums[i]%2)?1:0;
}

int sum=k;
int curr=0;
int last=0;
int ans=0;

unordered_map<int,int> abhi;
abhi[0]++;
for(int i=0;i<n;i++){
	
	curr+= arr[i];
	if(abhi.find(curr-k)!=abhi.end()){
		ans+= abhi[curr - k ];
	}
abhi[curr]++;
}
return ans;
