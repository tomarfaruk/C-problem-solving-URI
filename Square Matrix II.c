#include<stdio.h>
int main(){
	int i,j,k,l,m,n;
	
	while(1){
		
		scanf("%d",&n);	
		if(n==0)break;
		
		int arr[n+1][n+1], row=1, col;m=n;
		
	while(n==m){
		for(col=row; col<=n; col++)
			arr[row][col]=col;
	
		for(col=row+1; col<=n; ++col)
			arr[col][n]= 1+n-col;
		
		for(col=n-1; col>row-1; col--)
			arr[n][col]= n-col+1;
	
		for(col=n-1; col>row; col--)
			arr[col][row]= col;
	
		row++,n--;
		
	}
	for(i=2; i<=n; i++){
		for(j=2; j<=n; j++)
			arr[i][j]= arr[i-1][j-1];
	}
	
	for(i=1; i<=m; i++){
		for(j=1; j<=m; j++){
			if(j==1)printf("%3d",arr[i][j]);
			else printf(" %3d",arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");	
  }
  	
	return 0;
}

