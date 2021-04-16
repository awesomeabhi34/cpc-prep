if(!head || ! head->next || k==0){
	return head;
}

Node*temp= NULL;
Node*curr=head;
int co=0;

while(head->next!=NULL){
	co++;
	if(co==k){
		temp=head->next;
		head->next=NULL;
		head=temp;
		continue;
	}
	head = head->next;
}

head->next=curr;
return temp;


