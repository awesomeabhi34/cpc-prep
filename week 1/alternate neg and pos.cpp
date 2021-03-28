int n= arr.size();
int neg=0,pos=0;
for(int i=0;i<n;i++){
	if(arr[i]<0){
		neg++;
	}else{
		pos++;
	}
}
int sol[n];
for(int i=0;i<n;i++){
	sol[i]=arr[i];
}

int lo=0,hi=n-1;

if(neg<pos){
	
while(lo<hi){
	while(sol[lo]<0&&l0<hi){
		lo++;
	}
	while(sol[hi]>0&&l0<hi){
		hi--;
	}
	if(lo<hi){
		swap(sol[lo],sol[hi]);
		lo++;
		hi--;
	}
}
int i=0;
if(neg%2==0){
	while(i<neg){
		swap(sol[i],sol[neg+i+1]);
		i+=2;
	}
}else{
	while(i<neg){
		swap(sol[i],sol[neg+i]);
		i+=2;
	}
}
	
}else{
	while(lo<hi){
	while(sol[lo]>0&&l0<hi){
		lo++;
	}
	while(sol[hi]<0&&l0<hi){
		hi--;
	}
	if(lo<hi){
		swap(sol[lo],sol[hi]);
		lo++;
		hi--;
	}
}

int i=1;
if(pos%2==0){
	while(i<pos){
		swap(sol[i],sol[pos+i-1]);
		i+=2;
	}
}else{
	while(i<pos){
		swap(sol[i],sol[pos+i]);
		i+=2;
	}
}

}

return sol;




