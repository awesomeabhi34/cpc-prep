 bool isPalindrome(int x) {
       string str = to_string(x);
int n= str.length();
for(int i=0;i<n/2;i++){
	if(str[i]!= str[n-1-i]){
		return false;
	}
}
return true; 
    }
