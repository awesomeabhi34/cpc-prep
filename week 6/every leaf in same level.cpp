{
	Node*temp=root;
	int lvl=0;
	while(temp && (temp->left||temp->right)){
		lvl++;
		if(temp->left){
		temp=temp->left;
		}else if(temp->right){
			temp=temp->right;
		}
	}
	
	return ch(root,lvl,0);
}
bool ch(Node*root, int lvl , int hd){
	if(!root){
		return true;
	}
	
	if(!(root->left||root->right)){
		if(hd==lvl){
			return true;
		}else{
			return false;
		}
	}
	
	return ch(root->left)&&ch(root->right);
}
