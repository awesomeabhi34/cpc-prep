if(!head || !head-next){
	return head;
}

Node *odd=new Node(0);
Node*even=new Node(0);

Node *o=odd,*e=even;

Node*curr=head;

while(curr){
	if(curr->data & 1){
		o->next=curr;
		o=o->next;
		curr=curr->next;
	}else{
		e->next=curr;
		curr=curr->next;
		e=e->next;
	}
}

e->next=(odd->next);
o->next=NULL;
Node*temp= even->next;
delete(odd);
delete(even);

return temp;

