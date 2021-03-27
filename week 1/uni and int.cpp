#include<bits/stdc++.h>
using namespace std;

void myfunc(vector<int> arr1,vector<int> arr2,int n,int m){
	
	vector<int> uni,in;
	
	int i=0,j=0;
	
	while(i<n && j<m){
		if(i!=0){
		if(arr1[i]==uni.back()){ 
			i++;			// for checking if there arent any repeated elements in array
			continue;
		}	
		}
		if(j!=0){
			if(arr2[j]==uni.back()){
			j++;		 	// for checking if there arent any repeated elements in array 
			continue;
		}	
		}
	
		if(arr1[i]==arr2[j]){
			in.push_back(arr1[i]);
			uni.push_back(arr2[j]);
			i++;
			j++;
		}else if(arr1[i]<arr2[j]){
			uni.push_back(arr1[i]);
			i++;
		}else{
			uni.push_back(arr2[j]);
			j++;
		}
	}
	
	while(i<n){
			if(i!=0){
		if(arr1[i]==uni.back()){ 
			i++;			// for checking if there arent any repeated elements in array
			continue;
		}	
		}
		uni.push_back(arr1[i]);
		i++;
		}
		
		while(j<m){
			if(j!=0){
			if(arr2[j]==uni.back()){
			j++;		 	// for checking if there arent any repeated elements in array 
			continue;
		}	
		}
			uni.push_back(arr2[j]);
			j++;
		}

	for(int k=0;k<uni.size();k++){
			cout<<uni[k]<<" ";  //unions
		}
		cout<<endl;
		for(int p=0;p<in.size();p++){
			cout<<in[p]<<" ";  // intersections
		}
	
	return ;
}


int main(){

	int n,m;
	cin>>n>>m;
		vector<int> arr1(n),arr2(m);
		
		for(int i=0;i<n;i++){
			cin>>arr1[i];
		}
		
		for(int i=0;i<m;i++){
			cin>>arr2[i];
		}
		
		myfunc(arr1,arr2,n,m);
		
		return 0;
}
