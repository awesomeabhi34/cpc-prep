map<int , vector<int> > abhi;

for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){
		
	if(abhi.find(i+j)!=abhi.end()){
		abhi[i].push_back(mat[i][j]);
	}else{
		vector<int> temp;
		temp.push_back(mat[i][j]);
		abhi.insert({(i+j),temp});
	}
		
	}
}


for(auto x: abhi){
	for(int i=0;i<x.second.size();i++){
		cout<<x.second[i]<<" ";
	}
	cout<<endl;
}
