{
	if(!root){
		return true;
	}
	return ch(root->left,root->right);
}

bool ch(Node*root1,Node*root2){
	if(!root1&&!root2){
		return true;
	}
	
	if(!root1||!root2){
		return false;
	}
	
	return (ch(root1->left,root2->right)&&ch(root1->right,root2->left));
	
}
