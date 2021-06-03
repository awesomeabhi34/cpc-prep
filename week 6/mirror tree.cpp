{
	if(!root){
		return;
	}
	
	if(!root->left&&!root->right){
		return;
	}
	
	Node*temp=root->left;
	root->left=root->right;
	root->right=temp;
	
	func(root->left);
	func(root->right);
	return;
	
}
