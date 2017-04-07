#include<stdio.h>
int main(){
	int n = 0, i, j, test;
	float ratea, rateb;
	int  tpa,  ppa, ppb, pfa, pfb, tpb;
	
	scanf("%d",&test);
	for ( i=0; i<test; i++){
		
		scanf("%d%d%f%f",&ppa, &ppb, &ratea, &rateb);

		while(ppa <= ppb){
			
			ppa += ppa*(ratea/100.0), ppb += ppb*(rateb/100.0);
		
			n++;
			if(n > 100){
				printf("Mais de 1 seculo.\n");
				break;
			}
		}
			
			if(n<=100){
				printf("%d anos.\n",n);
			}
			
		n = 0;
		
	}
	
	
	
	return 0;
}
