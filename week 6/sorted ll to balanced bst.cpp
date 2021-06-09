{
	if(!head){
		return NULL;
	}
	
	Node*slo=head,*fast =head,*prev=slo;

while(fast->next&&fast->next->next){
prev=slo;
	slo=slo->next;
	fast=fast->next->next;
}

slo->right=func(slow->next);
prev->next=NULL;
if(head==slo){
	slo->left=NULL;
}else{
	slo->left=func(head);
}

return slo;
	
	
}
