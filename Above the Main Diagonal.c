//omar faruk
#include<stdio.h>
int main(){
	int i,j,k = 0,l,m,n;
	double arr[12][12], total = 0;
	char ch;
	scanf(" %c",&ch);
	
	for (i=0; i<12; i++){
		for(j=0; j<12; j++){
			scanf("%lf",&arr[i][j]);
			if(i<j)
				total +=arr[i][j];
		}
	}
	if(ch=='S')
		printf("%.1f\n",total);
	else
	 printf("%.1f\n",total/66.0);
	
	return 0;
}

