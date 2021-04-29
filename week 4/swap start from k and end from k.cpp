int count(Node*head){
	Node*temp=head;
	int co=0;
	
	while(temp){
		temp=temp->next;
		co++;
	}
	return co;
}
Node * func(Node *head){
	
int n=count(Node *head);

if(k>n|| 2*k-1==n){
	return ;
	
}
Node*temp=head;
if(2*k==n || 2*k-2==n){
	if(k>n-k){
		k=n-k;
	}
	
	Node *a,*b,*c,*d;
	int co=0;
	while(temp){
		co++;
		if(co==k-1){
			a=temp;
		}
		if(co==k){
			b=temp;
		}
		if(co==n-k+1){
			c=temp;
		}
		
		if(co==n-k+2){
			d=temp;
			break;
		}
		temp=temp->next;
	}
	a->next=c;
	c->next=b;
	b->next=d;
	
	return;
}
	Node *a,*b,*c,*d,*e,*f;
	int co=0;
	while(temp){
		co++;
		if(co==k-1){
			a=temp;
		}
		if(co==k){
			b=temp;
		}
		if(co==k+1){
			e=temp;
		}
		if(co==n-k){
			f=temp;
		}
		if(co==n-k+1){
			c=temp;
		}
		
		if(co==n-k+2){
			d=temp;
			break;
		}
		temp=temp->next;
	}
	a->next=c;
	c->next=e;
	f->next=b;
	b->next=d;
	
	return;
	
}
