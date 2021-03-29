 string convertToTitle(int num) {
        int d= num;

string str="";
int p;
char ch; 
while(d>26){
p= d%26;
d=d/26;
if(p==0){
	p=26;
	d--;
}
 ch = 'A' + p - 1;
str = ch + str;	
}

ch = 'A' + d - 1;
str= ch+ str;

return str;
    }
