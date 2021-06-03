
Node* func(Node*root,int k1,int k2, vector<int>& a){
	if(!root){
		return NULL;
		
	}
	
	if(root->data < k1){
		return func(root->right);
	}
	
	if(root->data>k2){
		return func(root->left);
	}
	
	root->left=func(root->left);
	root->right=func(root->right);
	
	return root;
}
