{
	
	if(!root){
		return;
	}
	stack<Node*> s;
	while(1){
		
		while(root && root->data!=k){
			s.push(root);
			root=root->left;
		}
		
		
		if(root && root->data==k){
			break;
		}
		
if(s.top()->right==NULL){
	root=s.top();
	s.pop();
	while(!s.empty() && s.top()->right==root){
		root=s.top();
		s.pop();
	}
}	
	
	root= s.empty()?NULL:s.top()->right;
	}
	
	while(!s.empty()){
		cout<<s.top()->data<<" ";
		s.pop();
	}
}
