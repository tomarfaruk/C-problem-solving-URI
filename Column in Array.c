#include<stdio.h>
int main(){
	double arr[12][12], total=0;
	int n, i, j, line;
	char ch;
	scanf(" %d %c",&line, &ch);
	
	for(i=0; i<12; i++){
		for(j=0; j<12; j++){
			scanf("%lf",&arr[i][j]);
			if(line==j)
			 total +=arr[i][j];
		}
	}
	
	if(ch == 'S')
	 printf("%.1f\n",total);
	 
	else printf("%.1f\n",total/12);
	
	return 0;	
}

