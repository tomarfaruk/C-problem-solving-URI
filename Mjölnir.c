///omarfaruk
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		int i;
		char name[100];
		scanf(" %s %d",name,&i);
		if( (strcmp(name,"Thor"))==0 )
			printf("Y\n");
		else printf("N\n");
	}
	return 0;
}

