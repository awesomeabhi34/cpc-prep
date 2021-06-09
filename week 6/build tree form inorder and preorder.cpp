{
	static int prein=0;
	if(st>end){
		return NULL;
	}
	
	Node*newnode= new Node(pre[prein++]);
	if(st==end){
		return newnode;
	}
	
	int key=search(in,st,end,newnode->data);
	newnode->left=func(in,pre,st,key-1);
	newnode->right=func(in,pre,key+1,end);
	
	return newnode;ss
	
}
