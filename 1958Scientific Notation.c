#include<stdio.h>
int main(){
	
	double var;
	//char str[__SIZEOF_DOUBLE__];
	char str[120];
	scanf("%lf", &var);
	sprintf(str, "%F",var);
	
	if(str[0] == '-')
		printf("%.4E\n",var);
		
	else printf("+%.4E\n",var);
		
	return 0;
}



