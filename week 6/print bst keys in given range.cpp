
void func(Node*root,int k1,int k2, vector<int>& a){
	if(!root){
		return;
		
	}
	if(root->data>=k1){
	func(root->left,k1,k2,a);
	    
	}
	
	
	if(root->data >=k1 && root->data<=k2){
	a.push_back(root->data);
	}
	if(root->data<=k2){
	func(root->right,k1,k2,a);
	    
	}
	return ;
}

vector<int> printNearNodes(Node *root, int low, int high)
{
  // your code goes here  
  vector<int> a;
  func(root,low,high,a);
  
  return a;
  
}
