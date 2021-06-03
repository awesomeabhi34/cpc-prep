{
	vector<int> a;
	vector<vector<int> > arr;
	int sum=0;
	func(root,a,arr,sum,k);
	return arr;
}

void func(Node*root,vector<int> a,vector<vector<int> >& arr,int sum,int k){
	if(!root){
		return;
	}
	a.push_back(root->data);
	sum+=root->data;
	if(!root->left && !root->right){
		if(sum==k){
			arr.push_back(a);
		}
	}
	
	func(root->left,a,arr,sum,k);
	func(root->right,a,arr,sum,k);
	return;
	
}
