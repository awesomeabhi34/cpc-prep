#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
int arr[n-1];
int sum=0;
for(int i=0;i<n-1;i++){
	cin>>arr[i];
	sum += arr[i];
}
	cout<<(n*(n+1))/2 - sum ;
	
	
	return 0;
}
