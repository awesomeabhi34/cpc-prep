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

 ListNode* ultaList(ListNode* head) {
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
ListNode *temp =ultfunc(left,right);

return temp;
    }
    
    ListNode* ultfunc(ListNode* left, ListNode* right){
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

bool func(ListNode* a, ListNode* b, ListNode* c){

Node *head1= SortList(a);
Node *head2= SortList(b);
Node *head3= ultaList(c);

while(head1){
	while(head2 && head3){
		if(head1->data + head2->data + head3->data == sum){
			return true;
		}
		
		if(head1->data + head2->data + head3->data < sum){
			head2=head2->next;
		}else{
			head3=head3->next;
			
		}
		
	}
	
	head1=head1->next;
}
return false;

}

