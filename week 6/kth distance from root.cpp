{
	if(!root||k<0){
		return;
	}
	
	if(k==0){
		cout<<root->data<<" ";
	}
	
	func(root->left,k-1);
	func(root->right,k+1);
	
}
