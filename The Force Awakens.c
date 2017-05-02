#include<stdio.h>
int main(){
	int m, n, i, j, k=0, l=0;
	scanf("%d %d",&m,&n);
	int arr[m][n];
	
	for(i=0; i<m; i++){
		for(j=0; j<n; j++)
			scanf("%d",&arr[i][j]);
	}
	for(i=1; i<m-1; i++){
		for(j=1; j<n-1; j++){
			
			if(arr[i][j]==42){
				if(arr[i-1][j-1]==7 && arr[i-1][j]==7 && arr[i-1][j+1]==7 && arr[i][j-1]==7 && arr[i][j+1] == 7 && arr[i+1][j-1]==7 && arr[i+1][j]==7 && arr[i+1][j+1]==7)
					k=i+1,l=j+1;
			}
		}
	}
	printf("%d %d\n",k,l);
	return 0;
}

