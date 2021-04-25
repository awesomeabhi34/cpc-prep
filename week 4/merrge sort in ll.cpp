 ListNode* sortList(ListNode* head) {
        if(!head || !head->next){
	return head;
}

ListNode *slow= head;
ListNode *fast =head->next;

while(fast && fast->next){
	slow=slow->next;
	fast=fast->next->next;
}
ListNode *curr=slow->next;
slow->next=NULL;
ListNode *left= sortList(head);
ListNode *right= sortList(curr);
ListNode *temp =func(left,right);

return temp;
    }
    
    ListNode* func(ListNode* left, ListNode* right){
	ListNode *abhi= new ListNode(-1);
	ListNode *temp=abhi;
	while(left && right){
		if(left->val < right->val){
			temp->next=left;
			temp=temp->next;
			left=left->next;
		}else{
			temp->next=right;
			right=right->next;
			temp=temp->next;
		}
	}
	
	if(left){
			temp->next=left;
	}
	
	if(right){
	temp->next=right;		
	}
	ListNode *my= abhi->next;
	delete(abhi);
	return my;
}
