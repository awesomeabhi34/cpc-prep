Node*temp = head;
int count=0;
while(temp!=NULL){
	count++;
}
temp=head;
int i=0;
stack<int> abhi;
while(i<n/2){
abhi.push(temp->data);
i++;
temp= temp->next;	
}

if(n&1){
	abhi.push(temp->data);
}

while(i<n){
	if(abhi.top() == temp->data){
		abhi.pop();
		temp=temp->next;
	}else{
		return false;
	}
}

return true;.
