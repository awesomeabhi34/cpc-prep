{
	if(!root){
		return (sum<=0);
	}
	int subsum=sum-root->data;
	bool ans=false;
	
	if(!(root->left||root->right)){
		if(subsum<=0 ){
		return true;
		}else{
		return false;
		}	
	}
	
	
	if(root->left){
		if(func(root->left,subsum)){
			ans=true;
		}else{
		root->left=NULL;
			}
	}
	
	if(root->right){
		if(func(root->right,subsum)){
			ans=true;
		
		}else{
		root->right=NULL;
		}
	}
	
	return ans;
}
