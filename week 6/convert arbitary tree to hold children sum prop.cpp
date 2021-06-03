{
	if(!node || !(root->left||root->right)){
		return;
	}
	
	func(root->left);
	func(root->right);
	
	int lv= (root->left)?root->left->data:0;
	int rv= (root->right)?root->right->data:0;
	
	int k= root->data-lv-rv;
	if(k>0){
		root->data+=k;
	}
	if(k<0){
		ch(root,-k);
	}
}

void ch(Node*root,int k){
	if(root->left){
		root->left->data+= k;
		ch(root->left,k);
	}else if(root->right){
		root->right->data+= k;
		ch(root->right,k);
	}
	
}
