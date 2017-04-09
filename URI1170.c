//omar faruk
#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	while(a--){
		double d;
		int c=0;
		scanf("%lf",&d);
		while(1){
			d=d/2;
			c++;
			if(d<=1)break;
		}
		printf("%d dias\n",c);
	}
	return 0;
}
