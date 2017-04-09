//omar faruk
#include<stdio.h>
int main(){
	int arr[15], n, i, k = 0, j = 0, par[15], impar[15];
	
	for(i=0; i< 15; i++)
		scanf("%d",&arr[i]);
	
	
	//print part...
	for(i=0; i<15; i++){
		if(arr[i]%2 == 0)
			par[j++]=arr[i];
		
		if(arr[i]%2 !=0)
			impar[k++] = arr[i];
		
		if(j==5){
			for(n=0; n<5;n++)
				printf("par[%d] = %d\n",n, par[n]);
			j=0;	
		}
		
		if(k==5){
			for(n=0; n<5;n++)
				printf("impar[%d] = %d\n",n, impar[n]);
			k=0;	
		}		
	}

	for(n=0; n<k;n++)
		printf("impar[%d] = %d\n",n, impar[n]);	
		
	for(n=0; n<j;n++)
		printf("par[%d] = %d\n",n, par[n]);		
	
	return 0;
}

