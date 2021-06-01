{
	if(!root){
		return 0;
	}
	
	if(!(root->left||root->right)){
		return 1;
	}
	
	return func(root->left)+func(root->right);
}
