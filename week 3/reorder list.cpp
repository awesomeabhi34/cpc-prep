if(!head || !head->next || !head->next->next){
	return head;
}

int n=0;
ListNode*temp=head;
while(temp){
	temp=temp->next;
	n++;
}

int k=n+1/2;
temp=head;
int i=1;
if(i<n){
	temp=temp->next;
	i++;
}

ListNode *a,*prev=NULL,*curr=temp->next;

while(curr){
	a=curr->next;
	curr->next=prev;
	prev=curr;
	curr=a;
}

temp->next=NULL;

ListNode* he=new ListNode(-1);
ListNode* abhi=he;
while(head && prev){
	abhi->next=head;
	abhi=abhi->next;
	head=head->next;
	abhi->next=prev;
	prev=prev->next;
	abhi=abhi->next;
}

if(head){
	abhi->next=head;
}

ListNode *mi = he->next;
delete(he);

return mi;


