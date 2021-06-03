{	int k=0;
	ch(root,&k);
}

void ch(Node*root,int*k){
	if(!root){
		return;
	}
	
	ch(root->right,&k);
	
	root->data += *k;
	*k=root->data;
	
	ch(root->left,&k);
	return;
}
