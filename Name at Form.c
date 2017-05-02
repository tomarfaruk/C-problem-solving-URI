#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	int chCount=0, i,j;
	char ch[1090];
	
	scanf("%[^\n]s",ch);
	chCount = strlen(ch);
	
	if(chCount > 80)printf("NO\n");
	else printf("YES\n");	
	
	return 0;
}

