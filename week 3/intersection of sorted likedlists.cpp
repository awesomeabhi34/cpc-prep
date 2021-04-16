Node*head=NULL;
Node *temp1=head1,*temp2=head2;
while(temp1 && temp2 && temp1->data != temp2->data){
	
	if(temp1->data > temp2->data){
		temp2 = temp2->next;
	}else{
		temp1= temp1->next;
	}
	
}
if(!temp1 || !temp2 ){
	return head;
}

head = temp1;
Node*temp= head;
temp1=temp1->next;
temp2=temp2->next;

while(temp1 && temp2){
	if(temp1->data == temp2->data){
		temp->next= temp1;
		temp=temp->next;
		temp1=temp1->next;
		temp2=temp2->next;
	}else if(temp1->data > temp2->data){
		temp2=temp2->data;
	}else{
		temp1=temp1->data;
		
	}
	
}
return head;


