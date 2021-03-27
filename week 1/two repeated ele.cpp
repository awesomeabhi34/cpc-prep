#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
int arr[n+2];
int ans=0,sum=0;
for(int i=1;i<n;i++){
	ans = ans^i;
}
for(int i=0;i<n+2;i++){
	cin>>arr[i];
	sum+= arr[i];
	ans= ans^arr[i];
}

sum = sum - ( ((n+1)*(n))/2);
for(int i=1;i<n/2 + 1 ;i++){
	if(i^(sum-i)== ans ){
		cout<< i<<" "<<sum-i;
		break;
	}
}
	
	return 0;
}
