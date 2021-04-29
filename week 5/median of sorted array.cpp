int l1=0,l2=0;
int r1=n-1,r2=n-1;
while(l1<r1 && l2<r2){
	int mid1= l1 + (r1-l1)/2;
	int mid2= l2 + (r2-l2)/2;
	int m1=1[mid1];
	int m2=arr2[mid2];
	 mid3= l1 + (r1-l1+1)/2;
 mid4= l2 + (r2-l2+1)/2;
	m1= (m1 + arr1[mid3])/2;
	m2= (m2 + arr2[mid4])/2;

	
	if(m1==m2){
		return m1;
	}
	
	if(m1>m2){
		r1=mid1;
		l2=mid4;
	}else{
		l1=mid3;
		r2=mid2;
	}
	
}

return (arr1[l1]+arr2[l2])/2;

