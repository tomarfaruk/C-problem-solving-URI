//omar faruk
#include<stdio.h>
int main(){
	int i,j,k = 11,l,m,n;
	double arr[12][12], total = 0;
	char ch;
	scanf(" %c",&ch);
	
	for (i=0; i<=11; i++){
		for(j=0; j<=11; j++){
			scanf("%lf",&arr[i][j]);
			if(j < k)total +=arr[i][j];				
		}
		k--;
	}
	if(ch=='S')
		printf("%.1f\n",total);
	else
	 printf("%.1f\n",total/66.0);
	
	return 0;
}

