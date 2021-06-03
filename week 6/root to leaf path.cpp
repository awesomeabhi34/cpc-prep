{
if(!root){
	return;
}	

a.push_back(root->data);

if(!root->left && !root->right){
	ans.push_back(a);
}

func(root->left,a,ans);
fuc(root->right,a,ans);


}

{
	vector<int> a;
vector<vector<int> > ans;
func(root,a,ans);

	return ans;
}
