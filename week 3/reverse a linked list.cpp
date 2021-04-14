if(head==null || head->next==null){
	return head;
}else{
	Node* temp = func(head->next);
	head->next->next= head;
	head->next=null;
	return temp;
}
