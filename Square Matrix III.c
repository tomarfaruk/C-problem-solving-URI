///omarfaruk
#include<stdio.h>
int space(int x);
int space(int x){
	int n=x,spa=0;
	while(n){
		n=n/10;
		spa++;
	}
	return spa;
}
int main(){
	int n, i, j, k, l, m;
	while(1){
		scanf("%d",&n);
		if(n==0)break;
			
		int arr[n][n];
		arr[0][0]=1;
		
		for(i=0; i<n; i++){
			for(j=1; j<n; j++){
				arr[i][j]=arr[i][j-1]*2;
			}				
			arr[i+1][0]=arr[i][0]*2;
		}
		
		int totalSpace=space(arr[n-1][n-1]);		// total space counte
		
		for(i=0; i<n; i++){
			for(j=0; j<n; j++){
				k=totalSpace-space(arr[i][j]);			// how much space can be print 
				
				if(j==0){
					while(k--)
						printf(" ");
					printf("%d",arr[i][j]);
				}
				
				else{
					while(k--)
						printf(" ");
					printf(" %d",arr[i][j]);
				}
			}
			
			printf("\n");
		}
			printf("\n");
		
	}	
	return 0;	
}


