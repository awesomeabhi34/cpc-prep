{
	Node*temp=root;
	
	while(temp->left){
		temp=temp->left;
	}
	return temp->data;
}
