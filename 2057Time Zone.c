#include<stdio.h>
int main(){
	int i,j,k,l;
	scanf("%d %d %d", &i, &j, &k);  //
	
	l = i+j+k;

	if(l >= 24)
		printf("%d\n",l-24);
	else if(l < 0)
		printf("%d\n",24+l);
	
	else printf("%d\n",l);
	
	
	return 0;
}
