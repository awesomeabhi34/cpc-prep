Node* func(int inor[],int st,int en){
	if(st>en){
		return NULL;
	}


int key=max(inor,st,en);

Node *root=new Node(inor[key]);

root->left=func(inor,st,key-1);
root->right=func(inot,key+1,en);
	
	return root;
}
