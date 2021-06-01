int func(Node*root){
	if(!root){
		return 0;
	}
int wid=0;
queue<Node*> q;
q.push(root);

while(!q.empty()){
	int si=q.size();
	if(si>wid){
		wid=si;
	}
	while(si--){
		Node*temp=q.front();
		q.pop();
		if(temp->left){
			q.push(temp->left);
		}
		if(temp->right){
			q.push(temp->right);
		}
	}
}
return wid;
}

