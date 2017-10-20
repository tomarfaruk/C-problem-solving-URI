#include<stdio.h>
#include<string.h>
//omar faruk
int main(){
	int n,i,j,k;
	scanf("%d",&n);		//input test case number
	for(i=1; i<=n; i++){
		char pedra[]="pedra", papel[] = "papel", tesoura[] ="tesoura", lagarto[] = "lagarto", Spock[] = "Spock", str1[100], str2[100];
		scanf("%s%s",str1,str2);
		
		printf("Caso #%d: ",i);		//test case print
		
		if( strcmp(str1,str2) == 0){
			printf("De novo!\n");
		}
		
		else if(strcmp(str1,pedra) == 0){
			
			if( (strcmp(str2, lagarto) == 0) || (strcmp(str2, tesoura) == 0) )
				printf("Bazinga!\n");
				
			else if( (strcmp(str2,papel) == 0) || ( strcmp(str2,Spock) == 0) )
				printf("Raj trapaceou!\n");
		}
		
		else if(strcmp(str1,papel) == 0){
			
			if(strcmp(str2,pedra) == 0 || strcmp(str2,Spock) == 0)
				printf("Bazinga!\n");
			else if( (strcmp(str2,tesoura) == 0) || ( strcmp(str2,lagarto) == 0) )
				printf("Raj trapaceou!\n");
		}
		
		else if(strcmp(str1,tesoura) == 0){
			
			if(strcmp(str2,papel) == 0 || strcmp(str2,lagarto) == 0)
				printf("Bazinga!\n");
			else if( (strcmp(str2,Spock) == 0) || ( strcmp(str2,pedra) == 0) )
				printf("Raj trapaceou!\n");
		}
		
		else if(strcmp(str1,lagarto) == 0){
			
			if( (strcmp(str2,Spock) == 0) || (strcmp(str2,papel) == 0) )
				printf("Bazinga!\n");
			else if( (strcmp(str2,pedra) == 0) || ( strcmp(str2,tesoura) == 0) )
				printf("Raj trapaceou!\n");
		}
		
		else if(strcmp(str1,Spock) == 0){
			
			if( (strcmp(str2,tesoura) == 0 ) || (strcmp(str2,pedra) == 0) )
				printf("Bazinga!\n");
			else if( (strcmp(str2,papel) == 0) || ( strcmp(str2,lagarto) == 0) )
				printf("Raj trapaceou!\n");
		}
		
	}
	return 0;
}

