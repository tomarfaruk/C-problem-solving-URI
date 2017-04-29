///omarfaruk
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	int i=0,j=0,k,total=0,l;
	
	while(1){
		char caw[10],scream[10],ch;
		if(i==3)break;
		scanf(" %s",caw);
		
		if( (strcmp(caw,"caw")) ==0 ){
			scanf(" %s",caw);
			printf("%d\n",total);
			i++, total=0;
		}
		else if( (strcmp(caw,"---"))  == 0)
			total+=0;
		else if( (strcmp(caw,"--*"))  == 0)
			total+=1;
		else if( (strcmp(caw,"-*-"))  == 0)
			total+=2;
		else if( (strcmp(caw,"-**"))  == 0)
			total+=3;
		else if( (strcmp(caw,"*--"))  == 0)
			total+=4;
		else if( (strcmp(caw,"*-*"))  == 0)
			total+=5;
		else if((strcmp(caw,"**-"))  == 0)
			total+=6;
		else if( (strcmp(caw,"***"))  == 0)
			total+=7;
		
	}
	return 0;
}
