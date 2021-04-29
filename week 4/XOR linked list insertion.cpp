//inserting at beggining

void func(Node **headref,int data){
Node*new_n =new Node();
new_n->data=data;
new_n->npx= *headref;

if(*headref){
*headref->npx = (*headref->npx ^ new_n);

}
*headref=new_n;
}
