void func(vector<vector<int> >& image,int sr,int sc,int nc,int ol){
		int m=image.size();
	int n=image[0].size();
	if(sr<0||sc<0 ||sr>=m||sc>=n){
		return;
	}
    if(image[sr][sc]!=ol){
        return;
    }
	image[sr][sc]=nc;
	func(image,sr+1,sc,nc,ol);
	func(image,sr,sc+1,nc,ol);
	func(image,sr-1,sc,nc,ol);
	func(image,sr,sc-1,nc,ol);
	return;
}
vector<vector<int> > floodFill(vector<vector<int> >& image,int sr,int sc,int nc){
int ol=image[sr][sc];
    if(ol!=nc){
        
    func(image,sr,sc,nc,ol);
    }
return image;
}

