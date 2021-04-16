if(!head){
	return NULL;
	
}

Node  *a=NULL,*p=NULL,*curr=head;
int co=0;
while(curr && co<k){
	a= curr->next;
	curr->next=prev;
	prev=curr;
	curr= a;
	co++;
}

head->next = reverse(a,k);

retrun prev;

