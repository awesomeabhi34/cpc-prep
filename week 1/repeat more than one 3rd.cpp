int n = A.size();
int fi=A[0],si=A[1];
int co1=0,co2=0;

for(int i=0;i<n;i++){
	if(A[i]== fi){
		co1++;
	}else if(A[i]== si){
	co2++;
	}else if(co1==0){
		fi= A[i];
	}else if(co2==0){
		si=A[i];
	}else{
		co1--;
		co2--;
	}
}

ch1=0,ch2=0;

for(int i=0;i<n;i++){
	if(A[i]==fi){
		ch1++;
	}
	if(A[i]==si){
		ch2++;
	}
}

if(ch1> n/3){
	return fi;
}
if(ch2>n/3){
	return si;
}

return -1;

