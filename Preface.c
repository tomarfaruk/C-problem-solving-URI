///omarfaruk
#include<stdio.h>
int main(){
	int a, b,p,c, n;
	scanf("%d%d",&a,&b);

	if(a<0){
		n=b;
		if(b<0)n=b*-1;
		for(c=0; c<n; c++){
			p= a-c;
			if(p%b==0)break;
		}
		printf("%d %d\n",p/b, c);
	}
	else
		printf("%d %d\n",a/b,a%b);
		
	return 0;
}

