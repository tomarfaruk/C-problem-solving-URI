#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	int chCount=0, i, j, k, n, t;
	scanf("%d",&t);
	while(t--){
		char ch[10100];
		scanf("%s",ch);
		chCount= strlen(ch);
		printf("%.2f\n",chCount*.01);
	}
	
	return 0;
}
