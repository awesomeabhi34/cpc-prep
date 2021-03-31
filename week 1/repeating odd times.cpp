int ans =0;
for(int i=0;i<n;i++){
	ans=ans^ arr[i];
	
}

int setbit= ans & ~(ans-1);

int x=0,y=0;

for(int i=0;i<n;i++){
	if(arr[i]&setbit){
		x= x^ arr[i];
	}else{
		y=y^ arr[i];
	}
}

int sol[2];
sol[0]= x;
sol[1]=y;
return sol;
