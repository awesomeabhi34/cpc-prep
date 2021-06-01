bool func(Node*root1,Node*root2){
	if((root1&&!root2)||(!root1&&root2)){
		return false;
	}
	
	if(!root1 && !root2){
		return true;
	}
	
	if(root1->data != root2->data){
		return false;
	}
	
	return (func(root1->left,root2->left)&&func(root1->right,root2->right));
		

	
}
