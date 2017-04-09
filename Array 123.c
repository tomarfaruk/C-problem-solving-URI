#include<stdio.h>
int main(){
	int i,j,k,l,m,n;
	while((scanf("%d",&n)) != EOF){
		
		int arr[n][n];
		for(i=0; i<n; i++){
			for(j=0; j<n; j++){
				arr[i][j]=3;
			}
		}
		for(i=0, j=n-1; i<n;j--, i++){
			arr[i][i]=1, arr[i][j]=2;
		}
		
		for(i=0; i<n; i++){
			for(j=0; j<n; j++)
				printf("%d",arr[i][j]);
			printf("\n");
		}
			
	}
	
	
	return 0;
}

