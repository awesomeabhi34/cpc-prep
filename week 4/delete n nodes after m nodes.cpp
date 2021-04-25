int co=1;
Node*temp=head;
while(co<m && temp){
	temp=temp->next;
	co++;
}
if(co!=m){
	return;
}
co=0;
Node*curr=temp->next;
while(curr && co<n){
	co++;
	Node*a=curr->next;
	free(curr);
	curr=a;
}

temp->next=curr;

return head;
