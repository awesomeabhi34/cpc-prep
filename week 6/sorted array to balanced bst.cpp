{
	if(lo>hi){
		return NULL;
	}

int mid = (l+r)/2;
Node*root= new Node(arr[mid]);

root->left=func(arr,0,mid-1);
root->right=func(arr,mid+1,n-1);

return root;

}
