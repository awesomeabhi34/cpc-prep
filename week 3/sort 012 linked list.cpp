Node *one,ze,tw;
one= new Node(0);
ze= new Node(0);
tw= new Node(0);

Node *z=ze,*o=one,*t=tw;

Node*curr=head;
while(curr){
	if(curr->data==0){
		z->next=curr;
		z=z->next;
		curr=curr->next;
	}else if(curr->data==1){
		o->next=curr;
		o=o->next;
		curr=curr->next;
	}else{
		t->next=curr;
		curr=curr->next;
		t=t->next;
	}
}

z->next= (one->next)?one->next:(tw->next);
o->next=tw->next;

t->next=NULL;

head=ze->next;

delete(one);
delete(ze);
delete(tw);

return head;
