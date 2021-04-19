

ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next){
	return head;
}
ListNode *prev=NULL,*curr=head,*a;

int co=0;

while(co<2){
    co++;
	a=curr->next;
	curr->next=prev;
	prev=curr;
	curr=a;
}

head->next=swapPairs(a);
return prev;

    }
