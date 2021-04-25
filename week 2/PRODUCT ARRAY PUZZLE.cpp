int pref[n],suff[n];

pref[0]=1;
suff[n-1]=1;
for(int i=1;i<n;i++){
	pref[i]= pref[i-1]*arr[i-1];
	
}

for(int i=n-2;i>=0;i--){
	suff[i]= suff[i+1]*arr[i+1];
}

int sol[n];

for(int i=0;i<n;i++){
	
	sol[i]=pref[i]* suff[i];
}

return sol;
