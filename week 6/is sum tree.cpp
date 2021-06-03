bool isSumTree(Node* root)
    {
         // Your code here
         
	if(!root){
		return true;
	}
	int k=0;
return ch(root,&k);
    }
    
bool ch(Node*root,int* k){
	if(!root){
		return true;
	}
	if(!root->left&&!root->right){
		*k+= root->data; 
		return true;
	}
	
	int lh=0,rh=0;
	
	if(!ch(root->left,&lh)||!ch(root->right,&rh)){
		return false;
	}
	
	*k=lh+rh;
	if(root->data==*k){
		*k+=root->data;
		return true;
	}else{
		return false;
	}
	
}
