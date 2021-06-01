{
Node*temp=root;

while(temp){
	
	if(temp->data<n1&&temp->data<n2){
		temp=temp->right;
	}else if(temp->data>n1&&temp->data>n2){
		temp=temp->left;
	}else{
		return temp;
	}
	
}
return NULL;
}
