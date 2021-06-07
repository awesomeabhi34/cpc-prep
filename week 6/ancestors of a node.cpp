bool ch(Node*root,int k){
	if(!root){
		return false;
	}
	if(root->data==k){
		return true;
	}
	
	if(ch(root->left,k,a)||ch(root->right,k,a)){
		cout<<root->data<<" ";
		return true;
	}
	return false;
}
