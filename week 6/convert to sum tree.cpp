{
	int k=0;
	
	func(root,&k);
	return;
	
}

void func(Node*root,int* k){
if(!root){
		return;
	}
	
	if(!root->left && !root->right){
		*k=root->data;
		root->data=0;
	}	
	
	lh=0,rh=0;
	
	func(root->left,&lh);
	func(root->right,&rh);
	
*k=lh+rh+root->data;
root->data=rh+lh;
return;
}
