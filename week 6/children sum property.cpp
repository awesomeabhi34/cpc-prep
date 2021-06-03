{
	if(!root || !(root->left||root->right)){
		return true;
	}
	
	
	int lv= (root->left)?root->left->data:0;
	int rv=(root-->right)?root->right->data:0;
	
	if(root->data!=lv+rv){
		return false;
	}
	return func(root->left)&&func(root->right);
}
