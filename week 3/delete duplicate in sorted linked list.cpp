 ListNode* deleteDuplicates(ListNode* head) {
        	if(!head || !head->next){
		return head;
	}
	ListNode *temp=head,*prev=temp;
	temp=temp->next;
	while(temp){
		
		if(temp->val == prev->val){
			ListNode*curr=temp;
			temp=temp->next;
            prev->next=temp;
			delete(curr);
			continue;
		}
		
		prev=temp;
		temp=temp->next;
		
		
	}
	
	return head;
    }
