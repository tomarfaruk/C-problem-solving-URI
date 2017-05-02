#include<stdio.h>
///maximum function 
int max(int a,int b){
	return(a>b?a:b);
}
///minimum function 
int min(int a,int b){
	return(a<b?a:b);
}

int main(){
	int a, b, c, d;
	///read angle value
	scanf("%d %d %d",&a,&b,&c);
	
	int x= max(a,max(b,c));
	int z= min(a,min(b,c));
	int y= a+b+c-x-z;
	
	if(x>=y+z) printf("Invalido\n");
	
	else{
		if(z==y&&z==x)printf("Valido-Equilatero\n");//check whether all sides are equal  
		else if(x==y || x==z || y==z)printf("Valido-Isoceles\n");//check whether two sides are equal  
		else printf("Valido-Escaleno\n");//check whether no sides are equal  
		
		if(x*x==y*y+z*z)printf("Retangulo: S\n");
		else printf("Retangulo: N\n");
	}
		
	return 0;
}

