///omarfaruk
#include<stdio.h>
#include<math.h>
int main(){
	int n, a, b, c, d;
	
	while(1){
		scanf("%d",&a);		 
		 if (a==0)break;
		 
		 scanf("%d %d",&b,&c);
		 
		 d= a*b*100/c;
		 d=pow(d,.5);
		 printf("%d\n",d);
	}
	return 0;
}

