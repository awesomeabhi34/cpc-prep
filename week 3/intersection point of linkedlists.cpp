if(head1 && head2){
	
	Node *temp1=head1,*temp2=head2;
	int co1=0,co2=0;
	
	while(temp1){
		co1++;
		temp1=tem1->next;
	}
	
	while(temp2){
		co2++;
		temp2=temp2->next;
		
	}
	
	if(co1==co2){
		return head1->data;
	}
	temp1=head1;
	temp2=head2;
	if(co2>co1){
		
		for(int i=0;i<co2-co1;i++){
			temp2=temp2->next;
		}
		
		
	}
	
	if(co1<co2){
		for(int i=0;i<co1-co2;i++){
			temp1=temp1->next;
		}	
	}
	
	while(temp1!=temp2){
		temp1=temp1->next;
		temp2=temp2->next;
	}
	
	return temp1->data;
	
	
}else{
	return -1;
}
