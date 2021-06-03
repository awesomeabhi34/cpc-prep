

bool ch(node*root1,node*root2){
		if((root1 && !root2)||(!root1&&root2)){
		return false;
	}
	if(!root1&&!root2){
		return true;
	}
	return (root1->data==root2->data)&&((ch(root1->left,root2->left)&&ch(root1->right,root2->right))||(ch(root1->left,root2->right)&&ch(root1->right,root2->left)));
}
