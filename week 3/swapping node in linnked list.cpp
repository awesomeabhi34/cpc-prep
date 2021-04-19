int n=0;

Listode *curr=head;

while(curr){
	curr=curr->next;
	n++;
}

int co=0;
curr=head;
while(co<n-k){
curr=curr->next;
co++;	
}

co=0;

Listode *temp=head
while(co<k-1){
	co++;
	temp=temp->next;
}

swap(temp->data,curr->data);

return head;

