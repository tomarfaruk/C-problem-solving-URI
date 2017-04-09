//omar faruk

#include<stdio.h>
#include<string.h>
int main(){

	while(1){
		int n,j, kg=0, total=0;
		scanf("%d",&n);
		if (n==0)break;
		
		for(j=0; j<n; j++){
			
			scanf("%d",&kg);
			char ch, name[1000];
			int i=0;
			scanf(" %c",&ch);
			while(ch !='\n'){
				name[i++] = ch;
				scanf("%c",&ch);
			}
			name[i]='\0';
			if((strcmp(name,"suco de laranja")) ==0)
				total += kg*120;
			else if((strcmp(name,"morango fresco")) ==0)
				total += kg*85;	
			
			else if((strcmp(name,"mamao")) ==0)
				total += kg*85;	
			else if((strcmp(name,"goiaba vermelha")) ==0)
				total += kg*70;	
			else if((strcmp(name,"manga")) ==0)
				total += kg*56;	
			else if((strcmp(name,"laranja")) ==0)
				total += kg*50;	
			else if((strcmp(name,"brocolis")) ==0)
				total += kg*34;	
	
		}
		
		if(total>=110 && total<=130)
			printf("%d mg\n",total);
		else if(total>130)
			printf("Menos %d mg\n",total-130);
		else printf("Mais %d mg\n",110-total);
			
	}	
	return 0;
}


