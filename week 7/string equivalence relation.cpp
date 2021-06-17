
int get(vector<int>& parent,int x){
     if(parent[x]!=x){
        return parent[x]=get(parent,parent[x]);
    }
    return x;
}



string solve(string a, string b, string target) {
  vector<int> parent(26);

  for(int i=0;i<26;i++){
      parent[i]=i;
  }
int n=a.length();
for(int i=0;i<n;i++){
    int p=get(parent,a[i]-'a');
    int j=get(parent,b[i]-'a');

    if(p!=j){
if(p>j){
    swap(p,j);
}
parent[j]=p;
    }
}

string ans="";

for(int i=0;i<target.length();i++){
   int ab=get(parent,target[i]-'a');
   char ch='a'+ab;
   ans+= ch;
}
return ans;
}
