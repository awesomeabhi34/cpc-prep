
void alternatingSplitList(struct Node* head) 
{
    //Your code here
  a=new Node(head->data);
    if(head->next){
.        
   b=new Node(head->next->data);
    }
   Node *temp1=a;
    Node *temp2=b;
    if(!head || !head->next ){
        
    
        
        
        return;
    }
    Node* curr= head->next->next;




while(curr && curr->next){
	
		temp1->next=new Node(curr->data);
		curr=curr->next;
		temp1=temp1->next;
		temp2->next=new Node(curr->data);
		curr=curr->next;
		temp2=temp2->next;

}

if(curr){
	temp1->next=new Node(curr->data);
}

return;
}
