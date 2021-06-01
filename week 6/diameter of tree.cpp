int func(Node*root){
if(!root){
	return 0;
}
int h=0;
int wid=0;
 width(root,&h,&wid);
 return wid;
}

void width(Node*root, int* height,int* wid){
if(!root){
	return;
}	
int lh=0,rh=0;

width(root->left,&lh,&wid);
width(root->right,&rh,&wid);

height= 1+max(lh,rh);

wid=max(wid,1+lh+rh);

return;


}
