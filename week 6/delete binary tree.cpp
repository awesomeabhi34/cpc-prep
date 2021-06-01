{
	if(!root){
		return;
	}
	
	func(root->left);
	func(root->right);
	
	delete(root);
	return;
	
}
