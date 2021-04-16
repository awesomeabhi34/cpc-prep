Node*temp =head;
Node*prev=	NULL;
int count=0;

while(temp){
	if(count&1){
	prev->next= temp->next;
	prev=temp;
	temp=prev->next;	
	free(prev);
	count++;
	continue;
	}
	count++;
	prev=temp;
	temp=temp->next;
	
		
}

return;
