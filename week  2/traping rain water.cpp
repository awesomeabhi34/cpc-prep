 int trap(vector<int>& arr){
        int n= arr.size();
        
        if(n==1||n==0){
            return 0;
        }
        
        int pref[n],bac[n];
        pref[0]=arr[0];
        bac[n-1]=arr[n-1];
        for(int i=1;i<arr.size();i++){
          if(arr[i]>pref[i-1]){
              pref[i]=arr[i];
          }else{
              pref[i]=pref[i-1];
          }
        }
        
        
        
        for(int i=n-2;i>=0;i--){
          if(arr[i]>bac[i+1]){
              bac[i]=arr[i];
          }else{
              bac[i]= bac[i+1];
          }
        }
        int sol=0;
        
        for(int i=0;i<n;i++){
            sol+= (min(pref[i],bac[i])-arr[i]);
        }
        
        return sol;
    }
