//omar faruk
#include<stdio.h>
int main(){
	int a,b,c,d,p,q,r,l,i,j,k,n;
	
	while(1){
		scanf("%d",&n);
		int arr[n][n];
		
		a=n; p=0; q=0; l=1;
		if(0==n)
			break;
		
		else{
		 if(n%2==0)
			r=n/2;
		else 
			r=n/2 +1;

		for(k=0; k<r; k++){
			for(i=p; i<n; i++){
				for(j=q; j<n; j++)
					arr[i][j]=l;
			}
			p++,q++,n--,l++;
		}
		
	///	printing part
		
	for(i=0; i<a; i++){
		for(j=0; j<a; j++){
			if(j==0)
				printf("%3d",arr[i][j]);
			else 
				printf(" %3d",arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
		
	}
}
		
	return 0;
}
