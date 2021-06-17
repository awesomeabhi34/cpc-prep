string findOrder(string dict[], int k, int N) {
        //code here
        
        vector<int> adj[N];
        vector<int> indeg(N,0);
        for(int i=0;i<k-1;i++){
            
            string w1=dict[i],w2=dict[i+1];
            int m=w1.length();
            int n=w2.length();
            int p=0,q=0;
            while(p<m && q<n && w1[p]==w2[q] ){
                p++;
                q++;
                
            }
            
            if(p!=m && q!=n){
                
            adj[w1[p]-'a'].push_back(w2[q]-'a');
            indeg[w2[q]-'a']++;
            }
        }
        
        
        int cnt=0;
     string topo="";
     queue<int> q;
     for(int i=0;i<N;i++){
         if(indeg[i]==0){
             q.push(i);
         }
     }
 
     while(!q.empty()){
        int u=q.front();
         q.pop();
         char ch='a'+u;
         topo=topo+ch;
    
           cnt++;
         for(auto x : adj[u]){
             indeg[x]--;
             if(indeg[x]==0){
                 q.push(x);
             }
         }
     }
     if(cnt==N){
        return topo;  
     }
      topo.clear();
      return topo;
    }
