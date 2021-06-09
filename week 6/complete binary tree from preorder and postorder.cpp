{
	
	if(*ind>si|| l>h){
		return NULL;
	}
	Node*root=new Node(pre[*ind]);
	*ind++;
	
	if(l==h){
		return root;
	}
	
	int i;
	for(int i=l;i<r;i++){
		if(pre[ind]==post[i]){
			break;
		}
	}
	if(i<=h){
	root->left=func(pre,post,ind,l,i,si);
	root->right=func(pre,post,ind,i+1,h,si);
		
	}
	
	return root;
}

{
int ind=0;

return func(pre,post,&ind,0,si-1,si);
	
}
