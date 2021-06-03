{int k=0;
	ch(Node*root,&k);
}

bool ch(Node*root,int* k){
	if(!root){
		return true;
	}
	int lh=0,rh=0;
	
	if(!ch(root->left,&lh)||!ch(root->right,&rh)){
		return false;
	}
	
	*k= 1+max(lh,rh);
	if(abs(rh-lh)>1){
		return false;
	}
	return true;
	
}
