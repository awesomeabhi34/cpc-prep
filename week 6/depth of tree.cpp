int func(Node*root){
	if(!root){
		return 0;
	}
	int lt= func(root->left);
	int rt= func(root->right);
	
	return 1+ max(lt,rt);
	
}
