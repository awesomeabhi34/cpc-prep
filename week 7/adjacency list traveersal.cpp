#include<bits/stdc++.h>
using namespace std;

int main(){
int n,m;
cin>>n>>m;
list<int> adj[n];

for(int i=0;i<m;i++){
	int a,b;
	cin>>a>>b;
	adj[a].push_back(b);
	adj[b].push_back(a);
}
int q;
cin>>q;
for(int j=0;j<q;j++){
	int a,b;
	cin>>a>>b;
list<int>::iterator i;
for(i=adj[a].begin();i!=adj[a].end();i++){
	if(*i==b){
		cout<<"YES"<<endl;
		break;
	}
}

if(i==adj[a].end()){
	cout<<"NO"<<endl;
}


}
	return 0;
}
