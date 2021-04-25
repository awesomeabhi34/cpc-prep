int ans[n];
ans[0]=ar[0];
ans[1]=arr[1];
ans[2]=arr[0] + arr[2];

for(int i=3;i<n;i++){
	ans[i] = arr[i] + max(ans[i-2],ans[i-3]);
}

return max(ans[n-1],ans[n-2]);
