int func(Node* root)
{
	if(!root){
		return 0;
	}
	
	return 1+ func(root->left)+func(root->right);
}


