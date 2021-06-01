int func(Node*root,int k){
vector<int> a;
a.clear();
solve(root,&a);
int n=a.size();
return a[n-k];
}

 solve(Node*root,vector<int>& a){
	if(!root){
		return;
	}
	
	solve(root->left);
	a.push_back(root->data);
	solve(root->right);
	return;
}
