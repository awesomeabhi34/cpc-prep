 int titleToNumber(string str) {
        int n= str.length();
int sol=0;

for(int i=0;i<n;i++){
	int num= (int)(str[i] - 'A');
    num++;
	sol += num*pow(26,n-1-i);
}
return sol;
    }
