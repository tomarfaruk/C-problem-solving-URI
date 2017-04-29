//omar faruk
#include<stdio.h>
#include <stdlib.h>
int main(){
	int m,n,i,j,ar[101][101];
	while( (scanf("%d %d",&n,&m)) != EOF ){
		
		int uri=0,ali=0,urj=0,alj=0,a=0,b=0;
		/// array initializ 
		for(i=0; i<n; i++){
			for(j=0; j<m; j++){
				scanf("%d",&ar[i][j]);
				if(ar[i][j]==1)uri=i,urj=j;
				if(ar[i][j]==2)ali=i,alj=j;
			}				
		}
		// calculation path time
		a=uri-ali , b=urj-alj;
		a=abs(a);b= abs(b);
		printf("%d\n",a+b);
		
	}
	return 0;
}

