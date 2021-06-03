{int co=0;
	int k= ch(root,k,7co)
}

int ch(Node*root,int k,int* co){
	if(!root){
		return -1;
	}
	
	int p=ch(root->left,k,&co);
	if(p!=-1){
		return p;
	}
	co++;
	if(k==co){
		return root->data;
	}
	
return ch(root->right,k,&co);

}
