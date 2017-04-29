///omarfaruk
#include<stdio.h>
int main(){
	int p1, p2, j1, j2, r, a, i,j,k=0;
	scanf("%d %d %d %d %d",&p1,&j1,&j2,&r,&a);
	j1+=j2;
	if(p1==1 && j1%2==0 || p1==0 && j1%2==1)
			k=1;
			
	if(r==1 && a==0 || r==0 && a==1 )
		k=5,printf("Jogador 1 ganha!\n");
	if(r==1 && a==1)
		k=5,printf("Jogador 2 ganha!\n");
	if(k !=5){
		if(k==1)printf("Jogador 1 ganha!\n");
		else printf("Jogador 2 ganha!\n");
	}
	
	return 0;
}
