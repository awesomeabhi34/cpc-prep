void func(Node*root){
	
	map<int,int> m;
	map<int,int>::iterator it;
	
	funcutil(root,0,m);
	
	
	for(auto it=m.begin();it<m.end();it++){
		cout<<it->second<<endl;
	}
	
}

void util(Node*root,int d, map<int,int>& m ){
	if(!root){
		return;
	}
	
	map[d]+=node->data;
	
	util(root->left,d-1,m);
	util(root->right,d+1,m);
	
}
