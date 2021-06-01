{
	if(!root){
		return;
	}
	
	Node* temp= new Node(root->data);
	temp->left=root->left;
	root->left=temp;
	
	func(root->left->left);
	func(root->right);
	
	return;
}
