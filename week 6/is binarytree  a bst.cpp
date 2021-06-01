
{
	if(!root ){
		return true;
	}
	
	if(root->left && root->data<root->left->data){
		return false;
	}
		if(root->right && root->data>root->right->data){
		return false;
	}
	
	return func(root->left)&&func(root->right);
}
