if(!head || !head-next){
	return head;
}

Node *vowel=new Node(0);
Node*conso=new Node(0);

Node *v=vowel,*c=conso;

Node*curr=head;

while(curr){
	if(curr->data & 1){
		v->next=curr;
		v=v->next;
		curr=curr->next;
	}else{
		c->next=curr;
		curr=curr->next;
		c=c->next;
	}
}

c->next=(vowel->next);
v->next=NULL;
Node*temp= conso->next;
delete(vowel);
delete(conso);

return temp;
