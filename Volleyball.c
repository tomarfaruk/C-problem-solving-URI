///omar faruk
#include<stdio.h>
int main(){
	int n,CanAttack=0, CanService=0, CanBlock=0, DoService=0, DoBlock=0, DoAttack=0, a, b, c;
	scanf("%d",&n);
	char ch[1001], ca='%';
	
	while(n--){
		scanf("%s %d %d %d",ch,&a,&b,&c);
		
		CanService+=a, CanBlock+=b, CanAttack+=c;
		scanf("%d %d %d",&a,&b,&c);
		
		DoService+=a, DoBlock+=b, DoAttack+=c;
	}
	printf("Pontos de Saque: %.2f %c.\n",DoService*100.0/CanService,ca);
	printf("Pontos de Bloqueio: %.2f %c.\n",DoBlock*100.0/CanBlock,ca);
	printf("Pontos de Ataque: %.2f %c.\n",DoAttack*100.0/CanAttack,ca);
	return 0;
}

