Node* curr = head;
node* a=NULL;

while(curr!=NULL){
	a= curr->next;
	free(curr);
	curr=a;
}

return NULL;
