bool  func(vector<vector<int>>& arr, int num,int lo,int hi,int m,int n){
       
        if(hi<lo){
            return false;
        }
        
        int mid = (lo + 1 + hi)/2;
        
        if(arr[mid][0] > num){
            return func(arr,num,lo,mid-1,m,n);
        }else {
            if(num <= arr[mid][n-1] ){
               int st=0,en=n-1; 
                while(en>=st){
                    int bw = st + (en-st)/2;
                    if(arr[mid][bw]==num){
                        return true;
                    }
                    if(arr[mid][bw]< num){
                        st=bw+1;
                    }else{
                        en=bw-1;
                    }
                }
                
                return false;
                
            }else{
                return func(arr,num,mid+1,hi,m,n);
            }
        }
        
        
    }
    
    bool searchMatrix(vector<vector<int>>& arr, int num) {
        
        int m= arr.size();
        int n= arr[0].size();
        
        return func(arr,num,0,m-1,m,n);
    }
