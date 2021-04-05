bool rowch=false,colch=false;

for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){
		
		if(i==0 && arr[i][j]==1){
			rowch=true;
		}
		
		if(j==0 && arr[i][j]==1){
			colch=true;
		}
		
		if(mat[i][j]==1){
			mat[0][j]== true;
			mat[i][0]==true;
		}
		
		
	}
}

for(int i=1;i<n;i++){
	for(int j=1;j<m;j++){
		if(mat[i][0]==true || mat[0][j]==true){
			mat[i][j]=1;
		}
	}
	
}
if(colch){
for(int i=0;i<m;i++){
mat[i][0]==1;
}
	
}

if(rowch){
for(int i=0;i<n;i++){
mat[0][i]==1;
}
	
}

return mat;




