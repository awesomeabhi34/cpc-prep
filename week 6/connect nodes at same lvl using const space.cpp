void connect(Node*p){
	p->next=NULL;
	
	connectrecur(p);
}

void connectrecur(Node*p){
	if(!p){
		return;
	}
	if(p->next){
		connectrecur(p->next);
	}
	
	if(p->left){
		if(p->right){
			p->left->next=p->right;
			p->right->next=getnode(p);
				
		}else{
		p->left->next=getnode(p);
		}
		connectrecur(p->left);
	}else if(p->right){
		p->right->next=getnode(p);
		connectrecur(p->right);
	}else{
		connectrecur(getnext(p));
	}
	
}

Node* getnext(Node* p){
	Node*temp=p->next;
	
	while(temp!=NULL){
		if(temp->left){
			return temp->left;
		}
		if(temp->right){
			return temp->right;
		}
		
		temp=temp->next;
	}
	return NULL;
}

