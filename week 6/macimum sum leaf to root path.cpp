void ch(TreeNode*root,int* k,int* ans){
	
	if(!root){
		return ;
	}
	
	int lh=0;
	int rh=lh;
	
	ch(root->left,&lh,ans);
	ch(root->right,&rh,ans);
	int p= (lh>rh)?lh:rh;
	p=(lh+rh>p)?lh+rh:p;
*k = (root->val+p>root->val)?root->val+p:root->val;
if(*k>*ans){
	*ans=*k;
}
	
	return;
	
	
}
    
    int maxPathSum(TreeNode* root) {
	if(!root){
		return 0;
	}
	
	int sum=0;
	int ans=INT_MIN;
	ch(root,&sum,&ans);
	return ans;
    }
