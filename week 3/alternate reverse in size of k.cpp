if(!head){
	return NULL;
}
int co=0;
Node *curr=head,*a=NULL,*prev=NULL;

while(co<k && curr){
	a= curr->next;
	curr->next=prev;
	prev=curr;
	curr=a;
	co++;
}
head->next=a;
co=1;

while(curr && co<k){
	curr=curr->next;
	co++;
}

if(curr){
	curr->next = func(curr->next,k);
}

return prev;
