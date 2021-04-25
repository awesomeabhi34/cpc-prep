Node *temp1=head1;
Node *temp,*curr;

while(temp1 && head2){
	curr=head2->next;
	temp=temp1->next;
	temp1->next=head2;
	head2->next=temp;
	temp1=temp;
	head2=curr;
}

return ;
