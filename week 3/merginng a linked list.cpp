Node* sortedMerge(Node* head1, Node* head2)  
{  Node *temp1=head1,*temp2=head2;
Node*head;
if(!temp1){
	return temp2;
}

if(!temp2){
	return temp1;
}
Node*temp;
if(head1->data > head2->data){
head= new Node(head2->data); 

	temp2=temp2->next;
	
}else{
	 head= new Node(head1->data); 
	temp1=temp1->next;
}
	temp=head;
while(temp1 && temp2){
	if(temp1->data < temp2->data){
		temp->next = new Node(temp1->data);
		temp1=temp1->next;
		temp=temp->next;
	}else{
		temp->next=new Node(temp2->data);
		temp2=temp2->next;
		temp=temp->next;
	}
}
if(!temp1){
temp->next= temp2;	
	
}

if(!temp2){
	temp->next=temp1;
}

return head;

    // code here
}  

