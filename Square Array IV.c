///omarfaruk
#include<stdio.h>
int main(){
	int n;
	while((scanf("%d",&n)) != EOF){
		int arr[n][n], i,j,k,l,m;
		
		for(i=0; i<n; i++){
			for(j=0; j<n; j++){
				arr[i][j]=0;
				if(i==j)arr[i][j]=2;
				 if(j==n-1-i)arr[i][j]=3;
				if(n/3<=i && i<=n-1-n/3 && n/3<=j && j<=n-n/3-1)arr[i][j]=1;
				if(n/2==i&&j==n/2)arr[i][j]=4;
			}
		}
		for(i=0; i<n; i++){
			for(j=0; j<n; j++)
				printf("%d",arr[i][j]);
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
