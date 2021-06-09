{
	static int i=0;
	Node*root = new Node(preor[i++]);
	if(prLN[i]=='L'){
		return root;
	}
	
	root->left=func(pre,preLN);
	root->right=func(pre,preLN);
	
	return root;
	
}
