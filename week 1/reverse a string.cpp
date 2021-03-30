for(int i=0;i<n/2;i++){
	char ch=str[i];
	str[i]= str[n-1-i];
	str[n-1-i]=ch;
}
return str;
