if(!head1){
	return head2;
}

if(!head2){
	return head1;
}

Node *curr1=head1,*curr2=head2;

Node *a1,*a2,*prev1=NULL,*prev2=NULL;

while(curr1){
	a1=curr1->next;
	curr1->next=prev1;
	prev1=curr1;
	curr1=a1;
}

while(curr2){
	a2=curr2->next;
	curr2->next=prev2;
	prev2=curr2;
	curr2=a2;
}

Node *curr=NULL;
int carry=0;
while(prev1 && prev2){
	int a= prev1->data;
	int b=prev2->data;
	
	int ans=a+b+carry;
	
	Node *temp=new Node(ans/10);
	carry=ans%10;
	temp->next=curr;
	curr=temp;	
	prev1=prev1->next;
	prev2=prev2->next;
}
if(prev1){
	int a= prev1->data;

	
	int ans=a+carry;
	
	Node *temp=new Node(ans/10);
	carry=ans%10;
	temp->next=curr;
	curr=temp;	
	prev1=prev1->next;
}

if(prev2){
	
	int b=prev2->data;
	
	int ans=b+carry;
	
	Node *temp=new Node(ans/10);
	carry=ans%10;
	temp->next=curr;
	curr=temp;	
	prev2=prev2->next;
}
	
if(carry){
	
Node *temp=new Node(carry/10);
	
	temp->next=curr;
	curr=temp;		
}

return curr;
