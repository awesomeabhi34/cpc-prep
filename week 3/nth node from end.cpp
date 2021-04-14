 Node* temp = head;
 Node* curr = head;
int i=0;
while(i<n){
	if(curr==null){
		return null;
	}
	
	curr= curr->next;
	i++;
}


while(curr->next!=null){
	curr=curr->next;
	temp=temp->next;
	
}

return temp;
