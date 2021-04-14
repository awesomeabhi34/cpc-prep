Node* temp= head;
if(temp== NULL){
	return;
}

if(temp->next==NULL){
	cout<<temp->data<<" ";
	return;
}

func(temp->next);

	cout<<temp->data<<" ";
	return;


