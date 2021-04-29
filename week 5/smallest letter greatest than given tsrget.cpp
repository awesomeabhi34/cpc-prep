char nextGreatestLetter(vector<char>& letters, char target) {
        int n=letters.size();

if(target >= letters[n-1]){
	return letters[0];
}
int l=0;
int r=n-1;
	int  mid;
while(l<=r){
 mid= l + (r-l)/2;
	
	
	if(letters[mid]<=target){
		l=mid+1;
	}else{
		r=mid-1;
	}
}

if(letters[mid]>target){
	return letters[mid];
}else{
	return letters[mid+1];
}
    }
