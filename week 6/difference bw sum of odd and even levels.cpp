int func(Node*root){
	if(!root){
		return 0;
	}
	
	return root->data-func(root->left)-func(root->right);
}
