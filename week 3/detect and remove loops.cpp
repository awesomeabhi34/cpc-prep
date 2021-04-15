void removeLoop(Node* head)
    {
        
        if(head==NULL){
	return;
}

if(head->next==head){
	head->next=NULL;
	return ;
}

Node* temp= head;
Node* slow=head;
Node* fast=head;


while(fast!= NULL && fast->next !=NULL){
temp=slow;
	slow = slow->next;
		fast= fast->next->next;
		
			if(slow == fast){
				
				slow=head;
				
				while(slow!=fast){
					temp=fast;
					fast=fast->next;
					slow=slow->next;
				}
				
				temp->next=NULL;
				
	return ;	
	}
}

return ;
    }
