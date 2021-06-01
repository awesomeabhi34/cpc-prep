{
	if(!root){
		return;
	}
	
	queue<Node*> q;
	stack<Node*> s;
	
	q.push(root);
	
	while(!q.empty()){
	Node*temp= q.top();
	q.pop();
	s.push(temp);
	if(temp->left){
		q.push(temp->left);
	}
	if(temp->right){
		q.push(temp->right);
	}
	}
	
	while(!s.empty()){
		Node*temp=s.top();
		s.pop();
		cout<<temp->data<<" ";
	}
	return;
}
