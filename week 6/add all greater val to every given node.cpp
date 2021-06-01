{
	
func(root,0);
	return ;
}

void func(Node*root,int* k){
		if(!root){
		return;
	}
	
	func(root->right,&k);
	
	root->data+= *k;
	*k=root->data;
	
	func(root->left);
	
	return;
}
